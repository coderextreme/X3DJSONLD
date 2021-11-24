###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='VolumeRendering'),
    component(level=2,name='Texturing3D'),
    meta(content='BasicBody.x3d',name='title'),
    meta(content='CT Scan of a human torso',name='description'),
    meta(content='28 April 2011',name='created'),
    meta(content='29 March 2020',name='modified'),
    meta(content='Andrew Wood, Nicholas Polys: Virginia Tech',name='creator'),
    meta(content='BasicBody.x3d',name='reference'),
    meta(content='README.txt',name='reference'),
    meta(content='Get prerequisite dataset, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/body.nrrd',name='reference'),
    meta(content='All datasets, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/datasets.zip',name='reference'),
    meta(content='All datasets, https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/datasets.zip',name='reference'),
    meta(content='Run the download target in the Ant build.xml file to install reference nrrd files locally.',name='reference'),
    meta(content='build.xml',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/VolumeRendering/BasicBody.x3d',name='identifier'),
    meta(content='Volume data obtained from http://pubimage.hcuge.ch:8080',name='reference'),
    meta(content='Volume data converted using Osirix, http://www.osirix-viewer.com',name='generator'),
    meta(content='Nrrd conversion utility located at http://teem.sourceforge.net/unrrdu',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BasicBody.x3d'),
    Group(
      children=[
      Viewpoint(DEF='VP',description='Basic Body',orientation=(0.940022,0.208839,0.269711,1.71637),position=(0.108923,-0.189725,-0.0135375)),
      Background(DEF='BG'),
      Transform(scale=(0.000292969,0.000292969,0.000292969),
        children=[
        VolumeData(dimensions=(512,512,452),
          voxels=ImageTexture3D(url=["datasets/nrrd/body.nrrd","http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/body.nrrd","https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/body.nrrd"]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BasicBody.py")
