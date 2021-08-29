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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_12',geoSystem=['GDC'],position=(25.78518503735335,55.87968120941913,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.78518503735335,55.87968120941913,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small2-4.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small2-5.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small3-4.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[2,1,3,5,4,17,9,19,41,53,32,32,58,14,8,11,13,14,17,29,42,46,2,2,2,0,0,6,19,27,25,23,55,32,36,36,20,8,7,8,20,33,46,49,1,1,2,4,0,0,24,21,22,36,39,41,32,26,17,9,9,12,19,34,50,52,1,0,0,3,0,0,6,12,27,29,28,29,31,22,20,10,8,11,16,32,50,51,1,1,0,0,1,5,3,2,18,22,30,31,29,15,27,12,16,10,14,26,36,39,0,1,0,0,0,1,0,2,3,0,19,16,26,26,10,1,22,4,10,16,61,71,0,1,0,0,2,0,1,0,-1,0,1,16,14,3,13,13,3,7,6,17,35,43,1,2,0,1,1,0,2,1,0,2,1,4,13,15,8,22,0,6,5,20,34,60,0,3,2,3,0,0,3,1,1,0,1,2,7,13,0,6,2,7,16,27,43,62,0,1,3,0,0,2,1,2,0,0,1,0,5,0,4,1,8,9,21,35,47,48,1,1,3,2,0,1,1,0,2,0,1,4,1,-2,4,-1,0,6,23,34,47,47,0,2,1,3,1,0,0,2,0,0,0,3,2,8,2,0,-4,6,16,30,36,34,0,0,1,1,2,0,0,1,1,0,0,0,0,0,1,10,0,5,12,18,26,24,0,0,0,0,0,0,0,1,0,0,2,0,3,0,0,5,1,0,5,12,15,16,0,0,0,3,1,0,0,0,0,2,2,1,0,2,1,2,0,0,2,5,10,11,3,1,0,0,1,0,1,0,0,0,2,1,0,0,0,0,-1,0,0,0,10,13,1,1,1,0,0,1,1,4,1,0,3,0,0,0,1,1,2,2,1,0,40,58,1,0,0,2,0,1,0,0,1,1,0,0,3,2,3,3,0,2,2,2,64,102,0,0,1,1,0,2,0,0,1,0,0,1,2,0,0,0,4,2,4,2,193,209,0,0,0,1,1,0,0,1,3,0,-1,1,1,2,2,0,4,0,1,2,3,5,1,0,0,0,0,-1,-1,0,0,0,2,2,0,1,2,2,2,1,3,0,3,2,1,0,0,0,0,-2,0,0,0,1,3,2,1,2,2,1,3,2,3,0,3,2],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
