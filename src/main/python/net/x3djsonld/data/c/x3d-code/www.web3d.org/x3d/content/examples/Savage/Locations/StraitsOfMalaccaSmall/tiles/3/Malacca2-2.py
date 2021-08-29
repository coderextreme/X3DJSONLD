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
    GeoViewpoint(description='GeoViewpoint_3_22',geoSystem=['GDC'],position=(2.116798394735791,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.116798394735791,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca4-4.x3d'],child2Url=['../../tiles/4/Malacca4-5.x3d'],child3Url=['../../tiles/4/Malacca5-4.x3d'],child4Url=['../../tiles/4/Malacca5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[33,19,24,20,38,19,18,37,11,24,16,19,3,3,2,5,25,27,30,32,10,11,27,11,9,12,35,14,17,33,10,30,27,5,5,4,8,7,27,27,33,10,23,12,22,20,29,9,12,31,27,29,27,32,27,3,7,3,47,27,27,32,31,31,31,15,15,17,23,32,28,33,35,14,30,11,3,7,4,32,25,33,29,31,31,23,19,3,15,9,23,23,25,33,34,12,25,19,14,7,25,31,23,30,26,36,27,26,23,8,7,20,23,26,17,29,12,29,19,19,1,5,11,28,23,31,33,31,26,19,2,8,11,19,26,19,27,30,18,9,7,21,2,8,7,25,22,28,28,32,28,29,23,21,20,29,21,31,8,13,8,26,22,17,0,13,23,28,25,31,30,29,27,22,26,14,23,19,29,23,6,24,19,19,21,12,8,17,28,29,25,29,29,27,21,28,27,32,27,18,29,14,4,3,18,21,8,11,-1,10,20,18,33,32,30,29,29,25,24,8,33,31,32,1,1,6,16,9,9,10,12,26,21,32,34,29,28,22,18,25,-4,11,28,27,23,0,3,13,-4,2,14,5,26,23,22,28,28,29,28,27,15,6,-2,-6,25,28,18,7,0,6,0,8,5,5,26,26,22,25,19,23,28,8,2,0,3,0,25,25,8,0,-2,-8,0,7,1,6,23,20,22,26,30,25,13,-2,0,0,2,2,22,9,0,1,-6,17,-3,4,8,4,23,13,26,24,19,22,0,0,4,0,4,-12,8,1,0,3,0,-3,-5,9,6,1,15,12,20,20,27,1,3,3,0,5,-5,0,4,1,5,-3,1,0,-1,-5,9,9,4,1,3,7,14,4,8,1,1,8,15,-1,-2,1,0,-2,0,0,1,0,3,-2,3,3,1,2,12,0,4,11,0,-1,11,0,2,0,3,1,5,-7,-1,-1,-3,1,-4,-1,1,0,-2,-4,0,3,0,-9,8,-14,0,5,2,3,1,1,0,0,1,-5,-5,-3,1,1,-4,-2,8,4,13,-12,19,-1,3,4,0,3,0,4,2,0,-1,0,0,-2,0,0,0,4,-3,4,-10,4,0,0,2,1,-1,2,3,2,3,0,0,0,2,-1,-1,0,-2,2,-1,0,-9,5,0,0],
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
