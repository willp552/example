FROM continuumio/anaconda3:5.0.1

# install sys requirements
RUN apt-get update
RUN apt-get install -y build-essential git

# clone in repo
RUN git clone https://github.com/willp552/example

# update conda
RUN conda update --yes conda

# go into repo
RUN cd example && conda env create -f example-dev-requirements.yml

# activate
RUN echo "source activate example-dev-requirements" > ~/.bash
ENV PATH /opt/conda/envs/example-dev-requirements/bin:$PATH

# activate
#RUN conda activate example-dev-requirements

# make build dir
RUN cd example && mkdir build

# run cmake
RUN  cd example/build && \
    cmake .. -DCMAKE_INSTALL_PREFIX=$(conda info --base)/envs/example-dev-requirements

# build and install project
RUN cd example/build && \
    make -j2 install