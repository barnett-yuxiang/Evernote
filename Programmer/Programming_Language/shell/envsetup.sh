



function validate_current_shell() {
    echo -e "validate current shell.\nUse of other shell would lead to erroneous results."

    type -t "$1"
}

validate_current_shell