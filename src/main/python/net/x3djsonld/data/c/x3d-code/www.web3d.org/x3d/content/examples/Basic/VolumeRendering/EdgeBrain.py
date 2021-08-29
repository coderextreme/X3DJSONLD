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
    component(level=2,name='VolumeRendering'),
    component(level=2,name='Texturing3D'),
    meta(content='EdgeBrain.x3d',name='title'),
    meta(content='Volume rendering of a brain MR image, rendered with basic edge enhancement style',name='description'),
    meta(content='26 March 2011',name='created'),
    meta(content='29 March 2020',name='modified'),
    meta(content='get brain2.nrrd on savage server',name='TODO'),
    meta(content='Andrew Wood, Nicholas Polys: Virginia Tech',name='creator'),
    meta(content='EdgeBrain.x3d',name='reference'),
    meta(content='README.txt',name='reference'),
    meta(content='Get prerequisite dataset, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/brain2.nrrd',name='reference'),
    meta(content='All datasets, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/datasets.zip',name='reference'),
    meta(content='All datasets, https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/datasets.zip',name='reference'),
    meta(content='Run the download target in the Ant build.xml file to install reference nrrd files locally.',name='reference'),
    meta(content='build.xml',name='reference'),
    meta(content='Volume Data obtained from, !! 3D Visualizer !!',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/VolumeRendering/EdgeBrain.x3d',name='identifier'),
    meta(content='Nrrd conversion utility located at http://teem.sourceforge.net/unrrdu',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='EdgeBrain.x3d'),
    Group(
      children=[
      Viewpoint(DEF='VP',description='Edge Brain',orientation=(-0.0212122,0.99986,0.012461,3.23009),position=(-0.00920216,0.012033,-0.184913)),
      Background(DEF='BG',skyColor=[(1,1,1)]),
      Transform(scale=(0.117188,0.117188,0.117188),
        children=[
        VolumeData(dimensions=(1.28,1.28,1.0),
          renderStyle=[
          EdgeEnhancementVolumeStyle(),],
          voxels=ImageTexture3D(url=["datasets/nrrd/brain2.nrrd","http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/brain2.nrrd","https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/brain.nrrd"]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EdgeBrain.py")
