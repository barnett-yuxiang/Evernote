from PIL import Image

# 载入原始彩色PNG图片
original_image = Image.open('original.png').convert('RGBA')

# 创建一个新的带有透明度的灰度图片
width, height = original_image.size
gray_image = Image.new('LA', (width, height), 0)

# 遍历每个像素
for x in range(width):
    for y in range(height):
        r, g, b, original_alpha = original_image.getpixel((x, y))
        
        # 计算亮度，人眼对绿色的敏感度最高，所以用加权平均的方式来计算
        luminance = int(0.2126 * r + 0.7152 * g + 0.0722 * b)
        
        # 叠加原始透明度和根据亮度计算出的新透明度
        new_alpha = (255 - luminance) * (original_alpha / 255)
        
        # 设置新图片的像素点
        gray_image.putpixel((x, y), (luminance, int(new_alpha)))

# 保存新的灰度图片
gray_image.save('transformed.png')
