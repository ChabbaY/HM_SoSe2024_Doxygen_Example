![Build Status](https://gitlab.com/pages/doxygen/badges/master/build.svg)

---

Example [doxygen] documentation website using GitLab Pages.

Learn more about GitLab Pages at https://pages.gitlab.io and the official
documentation http://doc.gitlab.com/ee/pages/README.html.

---

## `.gitlab-ci.yml` contents

This project's static Pages are built by [GitLab CI][ci], following the steps
defined in [`.gitlab-ci.yml`](.gitlab-ci.yml):

```
image: alpine

pages:
  script:
  - apk update && apk add doxygen
  - doxygen doxygen/Doxyfile
  - mv doxygen/documentation/html/ public/
  artifacts:
    paths:
    - public
  only:
  - master
```

## Requirements

- [Doxygen][]
- GraphViz (dot) [optionally]

If generating PDFs:

- PDF-LaTeX
- Ghostscript
- `make` [on *nix]

## Building locally

To work locally with this project, you'll have to follow the steps below:

1. Fork, clone or download this project
1. [Install][] Doxygen
1. Generate the documentation: `doxygen ./doxygen/Doxyfile`

The generated HTML will be located in the location specified by the Doxyfile,
in this case `doxygen/documentation/html`.

Read more at Doxygen's [documentation][].

## GitLab User or Group Pages

To use this project as your user/group website, you will need one additional
step: just rename your project to `namespace.gitlab.io`, where `namespace` is
your `username` or `groupname`. This can be done by navigating to your
project's **Settings**.

Read more about [user/group Pages][userpages] and [project Pages][projpages].

## Did you fork this project?

If you forked this project for your own use, please go to your project's
**Settings** and remove the forking relationship, which won't be necessary
unless you want to contribute back to the upstream project.

## Troubleshooting

1. CSS is missing! That means two things:

    Either that you have wrongly set up the CSS URL in your templates, or
    your static generator has a configuration option that needs to be explicitly
    set in order to serve static assets under a relative URL.

[ci]: https://about.gitlab.com/gitlab-ci/
[doxygen]: http://www.stack.nl/~dimitri/doxygen/index.html
[install]: http://www.stack.nl/~dimitri/doxygen/manual/install.html
[documentation]: http://www.stack.nl/~dimitri/doxygen/manual/index.html
[userpages]: http://doc.gitlab.com/ee/pages/README.html#user-or-group-pages
[projpages]: http://doc.gitlab.com/ee/pages/README.html#project-pages
