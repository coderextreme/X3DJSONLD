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
    meta(content='XperimentalSub.x3d',name='title'),
    meta(content='Andy Wiest',name='creator'),
    meta(content='1 July 2000',name='created'),
    meta(content='21 October 2001',name='modified'),
    meta(content='Imaginary experimental submarine - any similarity to submarines living or dead is purely coincidental, etc.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Submarines/Various/XperimentalSub.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Xperimental sub',position=(0,0,70)),
    Background(groundColor=[(.5,.5,.5)],skyColor=[(.5,.5,.5)]),
    Transform(DEF='Sub_w_propulsor',scale=(7,7,7),
      children=[
      Transform(DEF='US_multicolor_sub',rotation=(0,0,1,-1.5707),scale=(.8,1,1),
        children=[
        Transform(DEF='body_of_sub',
          children=[
          Shape(
            geometry=Cylinder(height=4),
            appearance=Appearance(DEF='sub_skin',
              texture=ImageTexture(DEF='Sub_body_texture',url=["SubmarineSkin.jpg","https://savage.nps.edu/Savage/Submarines/Various/SubmarineSkin.jpg"]),
              material=Material(ambientIntensity=.2,diffuseColor=(.7,.7,.7),emissiveColor=(.05,.05,.05),shininess=.1,specularColor=(.02,.03,.04))))]),
        Transform(DEF='sonar_dome',scale=(1,2,1),translation=(0,2,0),
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(USE='sub_skin'))]),
        Transform(DEF='ER_of_sub',rotation=(0,0,1,-3.14159),translation=(0,-4.5,0),
          children=[
          Shape(
            geometry=Cone(height=5),
            appearance=Appearance(USE='sub_skin'))]),
        Transform(DEF='sail_of_sub',scale=(1.2,.8,.3),translation=(-1,1.3,0),
          children=[
          Shape(DEF='sail_circle',
            geometry=Sphere(radius=.62),
            appearance=Appearance(USE='sub_skin')),
          Transform(translation=(0,-.2,0),
            children=[
            Shape(DEF='back_sail_circle',
              geometry=Sphere(radius=.62),
              appearance=Appearance(USE='sub_skin'))]),
          Transform(translation=(-.34,.1,0),
            children=[
            Shape(DEF='sail_top',
              geometry=Box(size=(.5,.6,.5)),
              appearance=Appearance(USE='sub_skin'))]),
          Transform(scale=(.4,1,1.1),translation=(-.52,-.1,0),
            children=[
            Shape(
              geometry=Sphere(radius=.3),
              appearance=Appearance(USE='sub_skin'))])]),
        Transform(DEF='rudder_of_sub1',translation=(0,-5.5,0),
          children=[
          Transform(rotation=(0,1,0,.785),
            children=[
            Transform(DEF='tailfin1',
              children=[
              Shape(
                geometry=Box(size=(2.3,.6,.05)),
                appearance=Appearance(USE='sub_skin')),
              Transform(rotation=(0,0,1,1.571),scale=(1.2,1.2,1.2),translation=(1.2,0,0),
                children=[
                Inline(url=["TowedArrayHousing.wrl","https://savage.nps.edu/Savage/Submarines/Various/TowedArrayHousing.wrl","TowedArrayHousing.x3d","https://savage.nps.edu/Savage/Submarines/Various/TowedArrayHousing.x3d"])])])]),
          Transform(rotation=(0,1,0,-.785),
            children=[
            Transform(USE='tailfin1')])]),
        Transform(DEF='bow_planes',translation=(0,2,0),
          children=[
          Shape(
            geometry=Box(size=(.07,.6,3.2)),
            appearance=Appearance(USE='sub_skin'))])]),
      Transform(rotation=(0,1,0,-1.571),scale=(.185,.185,.25),translation=(-6.3,0,0),
        children=[
        Inline(url=["ShroudedPropulsor.wrl","https://savage.nps.edu/Savage/Submarines/Various/ShroudedPropulsor.wrl","ShroudedPropulsor.x3d","https://savage.nps.edu/Savage/Submarines/Various/ShroudedPropulsor.x3d"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for XperimentalSub.py")
