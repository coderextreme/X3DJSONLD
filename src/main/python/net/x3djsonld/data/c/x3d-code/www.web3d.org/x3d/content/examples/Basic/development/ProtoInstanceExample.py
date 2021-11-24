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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ProtoInstanceExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Simple PROTO example, includes Node as a field for PROTO',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ProtoInstanceExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ProtoInstanceExample.x3d'),
    ProtoDeclare(name='NewShape',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='InitialAppearance',type='SFNode',
          children=[
          Appearance(
            material=Material(diffuseColor=(1,0,0)))]),
        field(accessType='initializeOnly',name='newHeight',type='SFFloat',value=3),
        field(accessType='initializeOnly',name='newRadius',type='SFFloat',value=0.5)]),
      ProtoBody=ProtoBody(
        children=[
        Shape(DEF='ContainedShape',
          IS=IS(
            connect=[
            connect(nodeField='appearance',protoField='InitialAppearance')]),
          geometry=Cylinder(DEF='ContainedCylinder',
            IS=IS(
              connect=[
              connect(nodeField='height',protoField='newHeight'),
              connect(nodeField='radius',protoField='newRadius')])))])),
    Billboard(
      children=[
      ProtoInstance(name='NewShape',
        fieldValue=[
        fieldValue(name='newHeight',value=3),
        fieldValue(name='newRadius',value=4),
        fieldValue(name='InitialAppearance',
          children=[
          Appearance(
            material=Material(DEF='CylinderMaterial',diffuseColor=(0,1,0)))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProtoInstanceExample.py")
