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
    meta(content='LowerBody.x3d',name='title'),
    meta(content='Flotation ring, floor and interior seats.',name='description'),
    meta(content='1 September 2004',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/LowerBody.x3d',name='identifier'),
    meta(content='Creates the lower body module of the hovercraft model',name='description'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Side View',orientation=(0,1,0,1.57),position=(30,0,4)),
    Viewpoint(description='Default',position=(0,0,40)),
    Viewpoint(description='TopView',orientation=(1,0,0,-1.57),position=(0,40,3)),
    Transform(rotation=(0,1,0,1.57),
      children=[
      Viewpoint(description='TopView2',orientation=(1,0,0,-1.57),position=(0,40,3))]),
    Viewpoint(description='Top View',orientation=(0,1,0,1.57),position=(30,5,0)),
    Viewpoint(description='Interior View',orientation=(1,0,0,-0.3),position=(0,3.5,10)),
    Group(DEF='LeftSide',
      children=[
      Group(DEF='Seg',
        children=[
        Transform(translation=(5,0,0),
          children=[
          Inline(DEF='BodyUnit',url=["BodyUnit.x3d","BodyUnit.wrl","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/BodyUnit.x3d","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/BodyUnit.wrl"])]),
        Transform(translation=(5,0,1),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(5,0,2),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(5,0,3),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(5,0,4),
          children=[
          Inline(USE='BodyUnit')])]),
      Transform(translation=(0,0,5),
        children=[
        Group(USE='Seg')]),
      Transform(translation=(0,0,-5),
        children=[
        Group(USE='Seg')]),
      Transform(translation=(0,0,10),
        children=[
        Group(USE='Seg')]),
      Transform(translation=(0,0,-10),
        children=[
        Group(USE='Seg')])]),
    Transform(translation=(-10,0,0),
      children=[
      Group(USE='LeftSide')]),
    Transform(translation=(0,0,13),
      children=[
      Group(DEF='Front',
        children=[
        Transform(translation=(4.9,0,0.97),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(4.62,0,1.91),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(4.16,0,2.78),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(3.54,0,3.54),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(2.78,0,4.16),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(1.91,0,4.62),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(0.97,0,4.9),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(0,0,5),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(-0.97,0,4.9),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(-1.91,0,4.62),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(-2.78,0,4.16),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(-3.54,0,3.54),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(-4.16,0,2.78),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(-4.62,0,1.91),
          children=[
          Inline(USE='BodyUnit')]),
        Transform(translation=(-4.9,0,0.97),
          children=[
          Inline(USE='BodyUnit')])])]),
    Group(DEF='Rear',
      children=[
      Transform(rotation=(0,1,0,1.57),translation=(0,0,-5),
        children=[
        Group(USE='Seg')]),
      Transform(rotation=(0,1,0,1.57),translation=(-5,0,-5),
        children=[
        Group(USE='Seg')])]),
    Transform(translation=(0,1.25,0),
      children=[
      Shape(
        geometry=Extrusion(crossSection=[(6.00,0.00),(5.92,-0.38),(5.71,-0.71),(5.38,-0.92),(5.00,-1.00),(0.00,-1.00),(-5.38,-0.92),(-5.71,-0.71),(-5.92,-0.38),(-6.00,-0.00),(-5.92,0.38),(-5.71,0.71),(-5.38,0.92),(5.00,1.00),(5.38,0.92),(5.71,0.71),(5.92,0.38),(6.00,0.00)],scale=[(1,1),(1,1),(0.981,1),(0.924,1),(0.831,1),(0.707,1),(0.556,1),(0.383,1),(0.195,1),(0.1,1)],spine=[(0,0,-10.5),(0,0,13),(0,0,13.975),(0,0,14.915),(0,0,15.780),(0,0,16.535),(0,0,17.155),(0,0,17.620),(0,0,17.905),(0,0,18)]),
        appearance=Appearance(
          material=Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.976208,0.979592))))]),
    Transform(translation=(2,2.3,0),
      children=[
      Group(DEF='Chair',
        children=[
        Shape(DEF='ChairBase',
          geometry=Box(size=(1.5,0.3,1.5)),
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.102041,specularColor=(0.780612,0.774022,0.752349)))),
        Transform(rotation=(1,0,0,-0.2),
          children=[
          Transform(rotation=(1,0,0,1.57),translation=(0,0.5,-0.5),
            children=[
            Shape(USE='ChairBase')])])])]),
    Transform(translation=(-2,2.3,0),
      children=[
      Group(USE='Chair')]),
    Transform(translation=(2,2.3,3),
      children=[
      Group(USE='Chair')]),
    Transform(translation=(-2,2.3,3),
      children=[
      Group(USE='Chair')]),
    Transform(translation=(2,2.3,6),
      children=[
      Group(USE='Chair')]),
    Transform(translation=(-2,2.3,6),
      children=[
      Group(USE='Chair')]),
    Transform(translation=(2,2.3,9),
      children=[
      Group(USE='Chair')]),
    Transform(translation=(-2,2.3,9),
      children=[
      Group(USE='Chair')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LowerBody.py")
