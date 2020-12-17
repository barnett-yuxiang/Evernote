



function validate_current_shell()
{
    echo -e "validate current shell."

    type -t "$1"
}

function addcompletions()
{
    echo "addcompletions."
    complete -F _lunch lunch
}


function _lunch()
{
    echo "_lunch."
}

function lunch()
{
    echo "lunch."
}


validate_current_shell
addcompletions
