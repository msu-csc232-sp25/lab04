# LAB04 - Exceptions in C++

Exceptions are a powerful tool in C++ that allow you to handle errors in a more structured way than simply returning an error code. In this lab, you will be implementing a simple exception hierarchy and using it to handle errors in a simple program.

## Background

Before proceeding with this lab, the student should take the time to read

* [C++ Interlude 3 Exceptions](https://msu.vitalsource.com/reader/books/9780138122782/epubcfi/6/188%5B%3Bvnd.vst.idref%3DP70010183410000000000000000027F8%5D!/4/2%5BP70010183410000000000000000027F8%5D/2/2%5BP70010183410000000000000000027F9%5D/7:0%5B%2C%20Ex%5D)
* [https://cppreference.com/w/cpp/language/exceptions](https://en.cppreference.com/w/cpp/language/exceptions)

## Objective

Upon successful completion of this lab, the student has learned how to

* throw exceptions
* catch exceptions
* write program-defined exception classes

in C++.

## Getting Started

After accepting this assignment with the
provided GitHub Classroom Assignment link, decide how you want to work with
your newly created repository:

- Using Codespaces directly in your web browser that employees the Visual Studio Code online IDE, or
- Using the IDE of your choice on your local machine

### Codespaces

If a Codespace is available for use (and this is your preferred method of development), open your newly created
repository in a Codespace.

At this point, you can skip to [Creating a development branch](#creating-a-development-branch).

### Local Development

Depending upon the IDE of your choice, many of the following steps may be taken within your IDE. It is up to you to
discover these tools (assuming they're available) and learn how to use them appropriately as desired. The following
instructions are assumed to take place within a terminal window. Note: many IDEs provide a terminal window as well.

#### Cloning your repository

The command you use to clone is slightly different depending upon whether
you're using `git` via `https`, `ssh`, or using the GitHub Cli via `gh`.

If you're using the `https` protocol, your clone command is:

```shell
git clone https://github.com/msu-csc232-sp25/<repo-name>.git
```

If you're using the `ssh` protocol, your clone command is:

```shell
git clone git@github.com:msu-csc232-sp25/<repo-name>.git
```

Finally, if you're using the GitHub CLI (`gh`), your clone command is:

```shell
gh repo clone msu-csc232-sp25/<repo-name>
```

After cloning the repository, navigate into the newly cloned repository:

```shell
cd <repo-name>
```

#### Creating a development branch

Next, create a branch named `develop`. Please note: The name of this branch **must** be as specified and will be, to the
grading scripts, case-sensitive.

```shell
git checkout -b develop
```

Make sure you are on the `develop` branch before you get started. Make all your commits on the `develop` branch.

```bash
git status
```

_You may have to type the `q` character to get back to the command line prompt after viewing the status._

## Tasks

This assignment consists of the following tasks:

- Task 1: Throwing Exceptions
- Task 2: Handling Exceptions
- Task 3: Writing Custom Exception Classes

In these tasks, if you are asked to write a function and no return value is expected, define the function as a void function. Since all of your definitions will occur in a header file [include/csc232.h](include/csc232.h), you should also begin the definition with the `inline` keyword. Finally, don't forget to add Doxygen comments to document your functions. At a minimum, these should include tags such as:

- `@brief` for a brief description of the function
- `@param` for each parameter, describing what it is and what it does
- `@return` for the return value (if applicable)
- `@throw` for any exceptions that may be thrown

In addition, you can also include tags such as:

- `@pre` for any preconditions that must be met before the function is called
- `@post` for any postconditions that are guaranteed to be true after the function is called

See [Appendix C C++ Documentation Systems](https://msu.vitalsource.com/reader/books/9780138122782/epubcfi/6/608%5B%3Bvnd.vst.idref%3DP70010183410000000000000000076A5%5D!/4/2%5BP70010183410000000000000000076A5%5D/2/2%5BP70010183410000000000000000076A6%5D/7:5%5B%2B%20D%2Cocu%5D) for more details.
### Task 1: Throwing Exceptions

1. Locate the `TEST_TASK1` macro in `include/csc232.h` and toggle its value from `FALSE` to `TRUE`.
2. Locate the `TODO: Task 1` comment in `include/csc232.h` and implement the following:
    1. Create a function named `throw_exception` that takes an integer parameter named `value`.
    2. Inside the function, throw an exception of type `std::runtime_error` with the message "An exception was thrown!" if the value is less than 0.
    3. If the value is greater than or equal to 0, print the value to the console.
3. Run the unit tests to verify that your implementation is correct.
4. If the unit tests pass, stage, commit, and push your changes to GitHub.

### Task 2: Handling Exceptions

1. Locate the `TEST_TASK2` macro in `include/csc232.h` and toggle its value from `FALSE` to `TRUE`.
2. Locate the `TODO: Task 2` comment in `include/csc232.h` and implement the following:
    1. Create a function named `handle_exception` that takes an integer parameter named `value`.
    2. Inside the function, call the `throw_exception` function with the value parameter.
    3. Use a `try` block to catch the exception thrown by the `throw_exception` function.
    4. If the exception is caught, print the exception message to the console.
3. Run the unit tests to verify that your implementation is correct.
4. If the unit tests pass, stage, commit, and push your changes to GitHub.

### Task 3: Writing Custom Exception Classes

1. Locate the `TEST_TASK3` macro in `include/csc232.h` and toggle its value from `FALSE` to `TRUE`.
2. Locate the `TODO: Task 3` comment in `include/csc232.h` and implement the following:
    1. Create a custom exception class named `NegativeValueException` that inherits from `std::runtime_error`.
    2. The `NegativeValueException` class should have a constructor that takes a string parameter named `message` and passes it to the base class constructor.
3. Run the unit tests to verify that your implementation is correct.
4. If the unit tests pass, stage, commit, and push your changes to GitHub.

## Submission Details

Before submitting your assignment, be sure you have pushed all your changes to GitHub. If this is the first time you're
pushing your changes, the push command will look like:

```bash
git push -u origin develop
```

If you've already set up remote tracking (using the `-u origin develop` switch), then all you need to do is type

```bash
git push
```

As usual, prior to submitting your assignment on Brightspace, be sure that you have committed and pushed your final
changes to GitHub. Once your final changes have been pushed, create a pull request that seeks to merge the changes in
your `develop` branch into your `trunk` branch.

You can use `gh` to create this pull request right from your command-line prompt:

```bash
gh pr create --assignee "@me" --title "Some appropriate title" --body "A message to populate description, e.g., Go Bills!" --head develop --base trunk --reviewer msu-csc232-sp25/graders
```

An "appropriate" title is at a minimum, the name of the assignment, e.g., `LAB02` or `HW04`, etc.

Once your pull request has been created, submit the URL of your assignment _repository_ (i.e., _not_ the URL of the pull
request) as a Text Submission on Brightspace. Please note: the timestamp of the submission on Brightspace is used to
assess any late penalties if and when warranted, _not_ the date/time you create your pull request. **No exceptions will
be granted for this oversight**.

### Due Date

Your assignment submission is due by the end of the lab period. After the due date, the assignment will be considered late.

### Grading Rubric

This assignment is worth **3 points**.

| Criteria           | Exceeds Expectations         | Meets Expectations                  | Below Expectations                  | Failure                                        |
|--------------------|------------------------------|-------------------------------------|-------------------------------------|------------------------------------------------|
| Pull Request (20%) | Submitted early, correct url | Submitted on-time; correct url      | Incorrect URL                       | No pull request was created or submitted       |
| Code Style (20%)   | Exemplary code style         | Consistent, modern coding style     | Inconsistent coding style           | No style whatsoever or no code changes present |
| Correctness^ (60%) | All unit tests pass          | At least 80% of the unit tests pass | At least 60% of the unit tests pass | Less than 50% of the unit tests pass           |

^ _The Google Test unit runner will calculate the correctness points based purely on the fraction of tests passed_.

### Late Penalty

* In the first 24-hour period following the due date, this assignment will be penalized 20%.
* In the second 24-hour period following the due date, this assignment will be penalized 40%.
* After 48 hours, the assignment will not be graded and thus earns no points.

## Disclaimer & Fair Use Statement

This repository may contain copyrighted material, the use of which may not
have been specifically authorized by the copyright owner. This material is
available in an effort to explain issues relevant to the course or to
illustrate the use and benefits of an educational tool. The material
contained in this repository is distributed without profit for research and
educational purposes. Only small portions of the original work are being
used and those could not be used to easily duplicate the original work.
