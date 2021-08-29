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
    meta(content='Figure25_03TorchLowDetail.x3d',name='title'),
    meta(content='Figure 25.3, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch25/25fig03.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='3 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A low-detail torch.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_03TorchLowDetail.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure25_03TorchLowDetail.x3d'),
    Viewpoint(description='Torch (low detail)',orientation=(1,0,0,-0.3),position=(0,0.4,2)),
    Transform(scale=(0.5,0.5,0.5),translation=(0,0,0.2),
      children=[
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2],
          coord=Coordinate(point=[(-0.15,0,0),(0,-1.5,0),(0.15,0,0)])),
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(0.4,0.4,0.4),specularColor=(0.7,0.7,0.7)))),
      Shape(DEF='Ring',
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,4,5,6,7,-1],
          coord=Coordinate(point=[(-0.40,-0.05,0.1),(0.40,-0.05,0.1),(0.40,0.05,0.1),(-0.40,0.05,0.1),(-0.40,0.15,0.1),(0.40,0.15,0.1),(0.40,0.25,0.1),(-0.40,0.25,0.1)])),
        appearance=Appearance(USE='Gray')),
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
        geometry=IndexedFaceSet(coordIndex=[0,1,2],
          coord=Coordinate(point=[(0.18,0,0.05),(0,1.2,0.05),(-0.18,0,0.05)]),
          color=Color(color=[(1,0,0),(0.9,0.5,0),(1,0,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure25_03TorchLowDetail.py")
