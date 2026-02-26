<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Simple To-Do List</title>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
            line-height: 1.6;
        }
        #todoInput {
            padding: 8px;
            width: 250px;
            border: 1px solid #ccc;
            border-radius: 4px;
        }

        #addBtn {
            padding: 8px 15px;
            cursor: pointer;
            background-color: #28a745;
            color: white;
            border: none;
            border-radius: 4px;
        }

        #addBtn:hover {
            background-color: #218838;
        }

        ul {
            list-style-type: none;
            padding: 0;
            margin-top: 20px;
        }

        li {
            background: #f4f4f4;
            margin: 5px 0;
            padding: 10px;
            border-radius: 5px;
            display: flex;
            justify-content: space-between;
            align-items: center;
            transition: 0.2s;
        }

        .task {
            cursor: pointer;
            flex-grow: 1;
        }

        li.completed {
            text-decoration: line-through;
            background: #d3ffd3;
            opacity: 0.7;
        }

        .removeBtn {
            background-color: #dc3545;
            color: white;
            border: none;
            padding: 5px 10px;
            border-radius: 5px;
            cursor: pointer;
        }

        .removeBtn:hover {
            background-color: #c82333;
        }
    </style>
</head>

<body>

    <h1>To-Do List</h1>
    <input type="text" id="todoInput" placeholder="Add a new task..." />
    <button id="addBtn">Add Task</button>

    <ul id="todoList"></ul>

    <script>
        $(document).ready(function() {
            // Function to handle adding a task (Consolidated logic)
            function addTask() {
                let input = $("#todoInput");
                let taskText = input.val().trim(); // Use .trim() to prevent empty spaces

                if (taskText !== "") {
                    $("#todoList").append(
                        '<li>' +
                        '<span class="task">' + taskText + '</span>' +
                        '<button class="removeBtn">Remove</button>' +
                        '</li>'
                    );
                    input.val(""); // Clear input
                    input.focus(); // Keep focus on input for next task
                }
            }

            // 1. Trigger addTask on button click
            $("#addBtn").on("click", addTask);

            // 2. Trigger addTask on "Enter" key
            $("#todoInput").on("keypress", function(event) {
                if (event.which === 13) { // 13 is the Enter key code
                    addTask();
                }
            });

            // 3. Toggle completion (Event Delegation)
            $("#todoList").on("click", ".task", function() {
                $(this).parent().toggleClass("completed");
            });

            // 4. Remove task (Event Delegation)
            $("#todoList").on("click", ".removeBtn", function() {
                $(this).parent().fadeOut(200, function() {
                    $(this).remove();
                });
            });
        });
    </script>
</body>

</html>