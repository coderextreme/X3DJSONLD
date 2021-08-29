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
    meta(content='TowedArrayHousing.x3d',name='title'),
    meta(content='Andy Wiest',name='creator'),
    meta(content='31 July 2000',name='created'),
    meta(content='8 April 2012',name='modified'),
    meta(content='Imaginary experimental towed-array housing pod.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Submarines/Various/TowedArrayHousing.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Scene nodes are added here 
    children=[
    Transform(DEF='TA_nodes',
      children=[
      Transform(DEF='TA_node',rotation=(0,0,1,-1.5707),scale=(.1,.1,.1),
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
        Transform(scale=(.2,1.5,.2),translation=(0,-6,0),
          children=[
          Transform(USE='body_of_sub')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TowedArrayHousing.py")
