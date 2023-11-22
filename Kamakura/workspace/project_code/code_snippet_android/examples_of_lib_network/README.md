### 步骤概述
1. 置 Gradle
2. 创建模型类
3. 定义 API 接口
4. 创建 Retrofit 实例
5. 使用 API 接口
6. 执行网络请求并处理响应
7. 错误处理和调试

### 1. 配置 Gradle (build.gradle.kts)

```gradle
dependencies {
    // retrofit and okhttp
    implementation("com.squareup.retrofit2:retrofit:2.9.0")
    implementation("com.squareup.retrofit2:converter-gson:2.9.0")
    implementation("com.squareup.okhttp3:okhttp:4.9.1")
    implementation("com.squareup.okhttp3:logging-interceptor:4.9.1")

    // kotlinx coroutines
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.6.0")
}
```

### 2. 创建模型类

```kotlin
data class User(
    val name: String,
    val email: String,
    val address: Address
)

data class Address(
    val street: String,
    val city: String,
    val zip: String
)
```

### 3. 定义 API 接口 // Retrofit 接口使用挂起函数

```kotlin
interface ApiService {
    @GET("users")
    suspend fun getUsers(): List<User>

    @GET("users/{id}")
    suspend fun getUserById(@Path("id") userId: String): User
}
```

### 4. 创建 Retrofit 实例

```kotlin
val retrofit = Retrofit.Builder()
    .baseUrl("https://api.example.com/")
    .addConverterFactory(GsonConverterFactory.create())
    .build()
```

### 5-6. 使用 API 接口 / 执行网络请求并处理响应

```kotlin
val apiService = retrofit.create(ApiService::class.java)

...

apiService.getUsers().enqueue(object : Callback<List<User>> {
    override fun onResponse(call: Call<List<User>>, response: Response<List<User>>) {
        if (response.isSuccessful) {
            // 处理成功的响应
            val users = response.body()
            // 更新UI或其他操作
        } else {
            // 处理错误的响应
        }
    }

    override fun onFailure(call: Call<List<User>>, t: Throwable) {
        // 网络请求失败的处理
    }
})

...

GlobalScope.launch(Dispatchers.Main) {
    try {
        val users = apiService.getUsers()
        // 更新UI或其他操作
    } catch (e: Exception) {
        // 处理错误
    }
}
```

### 7. 错误处理和调试

- 确保你的网络权限已在 AndroidManifest.xml 中设置。

- 使用 OkHttp 的 logging-interceptor 来查看网络请求和响应的详细日志。这对于调试非常有用

```kotlin
val logging = HttpLoggingInterceptor()
logging.setLevel(HttpLoggingInterceptor.Level.BODY)
val httpClient = OkHttpClient.Builder()
httpClient.addInterceptor(logging)

val retrofit = Retrofit.Builder()
    .baseUrl("https://api.example.com/")
    .addConverterFactory(GsonConverterFactory.create())
    .client(httpClient.build())
    .build()

// 更优雅的错误处理
val exceptionHandler = CoroutineExceptionHandler { _, exception ->
    // 处理协程中的异常
}

GlobalScope.launch(Dispatchers.Main + exceptionHandler) {
    // 网络请求代码
}
```

避免使用 GlobalScope, 在实际的应用中，你应该避免使用 GlobalScope，因为它的生命周期与整个应用相同，可能会导致内存泄漏。更好的做法是使用 lifecycleScope（在 Activity 或 Fragment 中）或 viewModelScope（在 ViewModel 中）。
