# APO-slides - The Basic Computer Architecture Course Slides

The slides prepared for computer architecture courses at Czech Technical University in Prague.

In particular, the next courses are based on the materials at this time:

  - FEL: B35APO Computer Architectures
  - Czech B35APO - https://cw.fel.cvut.cz/wiki/courses/b35apo/start
  - English BE5B35APO - https://cw.fel.cvut.cz/wiki/courses/b35apo/en/start

## QtRvSim - Companion Simulator for Education

The processor description uses QtRvSim simulator to demonstrate basic single cycle and pipelined processor structure, as well as memory hierarchy, cache, branch prediction, and interrupt handling.


The simulator is available for download and online execution in a web browser at the Computer Architectures Education site

  - https://comparch.edu.cvut.cz/

The sources are available on GitHub

  - https://github.com/cvut/qtrvsim



## Slides Sources Locations

The main CTU FEE repository for the APO slides on the faculty GitLab

  - https://gitlab.fel.cvut.cz/b35apo/apo-slides/

The CTU students and colleagues should report issues there.

The GitHub copy of the slides sources is provided on GitHub to allow public reuse, problems report, and contributions pull requests

  - https://github.com/cvut/comparch-slides

## The Slides Build Process

The slides are based on the LaTeX [Beamer](https://ctan.org/pkg/beamer) style. The diagrams and figures sources are developed in SVG format and converted to PDF format by [Inkscape](https://inkscape.org/). The actual version supports Czech and English language. The language is selected by `DOC_LANG`  variable. Use the following command in the individual slide/lecture topics directory

  - make DOC_LANG=en

## Slides Project Progress Tracking

The Czech slides for lectures 01 to 11 and 13 are completed.

The English variant offers slides for lectures 01 to 08.

The older LibreOffice-based slides for Czech and English lecture variants are complete for the whole course; see the subject pages for PDF outputs and ODP files. 

## Resources and Publications

  - Computer architectures pages at Czech Technical University in Prague [https://comparch.edu.cvut.cz/](https://comparch.edu.cvut.cz/)

  - Dupak, J.; Pisa, P.; Stepanovsky, M.; Koci, K. [QtRVSim – RISC-V Simulator for Computer Architectures Classes](https://comparch.edu.cvut.cz/publications/ewC2022-Dupak-Pisa-Stepanovsky-QtRvSim.pdf) In: [embedded world Conference 2022](https://events.weka-fachmedien.de/embedded-world-conference). Haar: WEKA FACHMEDIEN GmbH, 2022. p. 775-778. ISBN 978-3-645-50194-1. ([Slides](https://comparch.edu.cvut.cz/slides/ewc22-qtrvsim.pdf))

Please reference above article, if you use QtRvSim in education or research related materials and publications.

## LICENSE

The slides source and generated files are provided under following license

  - CC BY-SA - Attribution-ShareAlike

Slides authors:
  - Pavel Pisa https://control.fel.cvut.cz/ing-pavel-pisa-phd
  - Petr Stepan https://mrs.fel.cvut.cz/people/petr-stepan

Contributions from
  - Michal Stepanovsky https://fit.cvut.cz/cs/fakulta/lide/5416-michal-stepanovsky
    - slides and diagrams prepared in the frame CTU FEE B35APO course and some from his CTU FIT course
