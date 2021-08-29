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
    meta(content='SimpleOilRig1994.x3d',name='title'),
    meta(content='Simple oil-rig model first created in 1994 using OpenInventor. Translation performed as part of AUV tutorial at UUST 2003. Thank you Christopher Williams for naming the OffshoreStructures top-level SAVAGE category!',name='description'),
    meta(content='bottom corner at origin',name='hint'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='1 January 1994',name='created'),
    meta(content='24 August 2003',name='translated'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://faculty.nps.edu/brutzman/dissertation',name='reference'),
    meta(content='Simple oil rig model',name='subject'),
    meta(content='https://savage.nps.edu/Savage/OffshoreStructures/OilRigs/SimpleOilRig1994.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundColor=[(0.1,0.3,0.1)],skyColor=[(0.4,0.4,0.7)]),
    Viewpoint(description='View from surface, 100m back',position=(0,0,100)),
    Transform(scale=(10,10,10),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    Transform(DEF='SpinningViewpointTransform',translation=(0,38,0),
      children=[
      Viewpoint(description='Overlooking top deck',position=(17.0,32.0,60)),
      TimeSensor(DEF='Clock',cycleInterval=20,loop=True),
      OrientationInterpolator(DEF='SpinInterpolator',key=[0,0.5,1],keyValue=[(0,1,0,0.0),(0,1,0,3.1415926535897932384626433832795),(0,1,0,6.283185307179586476925286766559)]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='SpinInterpolator'),
      ROUTE(fromField='value_changed',fromNode='SpinInterpolator',toField='set_rotation',toNode='SpinningViewpointTransform')]),
    Transform(DEF='OilRigRootTransform',translation=(-20,38,20),
      children=[
      Transform(translation=(0.0,-10.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='blueMetal',diffuseColor=(0.4,0.4,1.0))),
          geometry=Cylinder(DEF='Leg',height=55.0,radius=3.0))]),
      Transform(translation=(0.0,-10.0,-35.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='blueMetal')),
          geometry=Cylinder(USE='Leg'))]),
      Transform(translation=(35.0,-10.0,-35.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='blueMetal')),
          geometry=Cylinder(USE='Leg'))]),
      Transform(translation=(35.0,-10.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='blueMetal')),
          geometry=Cylinder(USE='Leg'))]),
      Transform(rotation=(0.0,0.0,1.0,1.2),translation=(17.5,10.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='white',diffuseColor=(1.0,1.0,1.0))),
          geometry=Cylinder(DEF='CrossLeg',height=38.0,radius=0.8))]),
      Transform(rotation=(0.0,0.0,1.0,-1.2),translation=(17.5,10.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='white')),
          geometry=Cylinder(USE='CrossLeg'))]),
      Transform(rotation=(1.0,0.0,0.0,1.2),translation=(0.0,10.0,-17.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='white')),
          geometry=Cylinder(USE='CrossLeg'))]),
      Transform(rotation=(1.0,0.0,0.0,-1.2),translation=(0.0,10.0,-17.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='white')),
          geometry=Cylinder(USE='CrossLeg'))]),
      Transform(rotation=(1.0,0.0,0.0,1.2),translation=(35.0,10.0,-17.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='white')),
          geometry=Cylinder(USE='CrossLeg'))]),
      Transform(rotation=(1.0,0.0,0.0,-1.2),translation=(35.0,10.0,-17.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='white')),
          geometry=Cylinder(USE='CrossLeg'))]),
      Transform(rotation=(0.0,0.0,1.0,1.2),translation=(17.5,10.0,-35.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='white')),
          geometry=Cylinder(USE='CrossLeg'))]),
      Transform(rotation=(0.0,0.0,1.0,-1.2),translation=(17.5,10.0,-35.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='white')),
          geometry=Cylinder(USE='CrossLeg'))]),
      Transform(translation=(17.5,17.5,-17.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,0.2,0.2))),
          geometry=Box(size=(50.0,2.0,50.0)))]),
      Transform(translation=(27.5,22.5,-17.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,0.0))),
          geometry=Box(size=(15.0,8.0,10.0)))]),
      Transform(translation=(5.0,21.5,-17.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,1.0,0.4))),
          geometry=Box(size=(10.0,6.0,10.0)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SimpleOilRig1994.py")
