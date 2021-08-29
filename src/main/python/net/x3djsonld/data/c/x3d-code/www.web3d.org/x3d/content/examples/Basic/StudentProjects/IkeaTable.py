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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='IkeaTable.x3d',name='title'),
    meta(content='X3D example Model of an Ikea Table',name='description'),
    meta(content='3 March 2004',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Vaughn Pangelinan',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaTable.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IkeaTable.x3d'),
    Transform(
      children=[
      Group(DEF='IkeaTable',
        children=[
        Viewpoint(DEF='AboveTable',description='Above Table',orientation=(1,0,0,-.65),position=(0,1.1,1.2)),
        Shape(
          geometry=Box(size=(.9,.02,.6)),
          appearance=Appearance(DEF='Green',
            material=Material(diffuseColor=(0,.6,0)))),
        Transform(translation=(.4,-.31,.25),
          children=[
          Shape(DEF='TableLeg',
            geometry=Box(size=(.05,.6,.05)),
            appearance=Appearance(DEF='Yellow',
              material=Material(diffuseColor=(.8,.8,0))))]),
        Transform(translation=(-.4,-.31,.25),
          children=[
          Shape(USE='TableLeg')]),
        Transform(translation=(.4,-.31,-.25),
          children=[
          Shape(USE='TableLeg')]),
        Transform(translation=(-.4,-.31,-.25),
          children=[
          Shape(USE='TableLeg')]),
        Transform(translation=(0,-.05,.25),
          children=[
          Shape(DEF='LongBeam',
            geometry=Box(size=(.75,.08,.02)),
            appearance=Appearance(USE='Yellow'))]),
        Transform(translation=(0,-.05,-.25),
          children=[
          Shape(USE='LongBeam')]),
        Transform(translation=(.4,-.05,0),
          children=[
          Shape(DEF='ShortBeam',
            geometry=Box(size=(.02,.08,.45)),
            appearance=Appearance(USE='Yellow'))]),
        Transform(translation=(-.4,-.05,0),
          children=[
          Shape(USE='ShortBeam')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IkeaTable.py")
