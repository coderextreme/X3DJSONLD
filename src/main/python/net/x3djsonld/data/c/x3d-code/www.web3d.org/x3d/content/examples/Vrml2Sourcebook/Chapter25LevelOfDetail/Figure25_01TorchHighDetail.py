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
    meta(content='Figure25_01TorchHighDetail.x3d',name='title'),
    meta(content='Figure 25.1, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch25/25fig01.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='3 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A high-detail torch.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_01TorchHighDetail.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure25_01TorchHighDetail.x3d'),
    Viewpoint(description='Torch (high detail)',position=(0,0,2)),
    Transform(scale=(0.5,0.5,0.5),translation=(0,0,0.2),
      children=[
      Transform(rotation=(1,0,0,3.14),translation=(0,-0.75,0),
        children=[
        Shape(
          geometry=Cone(bottomRadius=0.15,height=1.5),
          appearance=Appearance(DEF='Gray',
            material=Material(diffuseColor=(0.4,0.4,0.4),specularColor=(0.7,0.7,0.7))))]),
      Shape(DEF='Ring',
        geometry=Cylinder(bottom=False,height=0.1,radius=0.4,top=False),
        appearance=Appearance(USE='Gray')),
      Transform(translation=(0,0.2,0),
        children=[
        Shape(USE='Ring')]),
      Shape(DEF='Bar',
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],
          coord=Coordinate(point=[(0.04,0.00,0.38),(0.04,0.35,0.38),(-0.04,0.35,0.38),(-0.04,0.00,0.38)])),
        appearance=Appearance(USE='Gray')),
      Transform(rotation=(0,1,0,-1.571),
        children=[
        Shape(USE='Bar')]),
      Transform(rotation=(0,1,0,-0.785),
        children=[
        Shape(USE='Bar')]),
      Transform(rotation=(0,1,0,0.785),
        children=[
        Shape(USE='Bar')]),
      Transform(rotation=(0,1,0,1.571),
        children=[
        Shape(USE='Bar')]),
      Transform(translation=(0,-0.35,0),
        children=[
        Shape(
          geometry=Cylinder(height=0.15,radius=0.20),
          appearance=Appearance(USE='Gray')),
        Transform(translation=(0,0,-0.2),
          children=[
          Shape(
            geometry=Box(size=(0.45,0.25,0.39)),
            appearance=Appearance(USE='Gray'))])]),
      Shape(DEF='Flames',
        #  No appearance, use emissive shading 
        geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1],
          coord=Coordinate(point=[(0.25,0.0,0.00),(0.15,1.0,0.10),(0.05,0.0,0.15),(0.18,0.0,0.05),(0.00,1.2,0.05),(-0.10,0.0,0.05),(-0.00,0.0,0.15),(-0.13,0.8,0.10),(-0.25,0.0,0.00)]),
          color=Color(color=[(1.0,0.0,0.0),(0.9,0.5,0),(1.0,0.0,0.0),(0.9,0.3,0),(1.0,1.0,0.0),(0.9,0.3,0),(0.7,0.1,0.2),(0.9,0.8,0),(1.0,0.0,0.0)]))),
      Transform(rotation=(0,1,0,1.57),scale=(0.9,0.9,1),
        children=[
        Shape(USE='Flames')]),
      Transform(rotation=(0,1,0,-1.57),scale=(0.9,0.9,1),
        children=[
        Shape(USE='Flames')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure25_01TorchHighDetail.py")
