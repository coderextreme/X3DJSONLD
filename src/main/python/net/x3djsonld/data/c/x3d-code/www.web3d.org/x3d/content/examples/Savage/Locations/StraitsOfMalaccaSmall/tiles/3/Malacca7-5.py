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
    GeoViewpoint(description='GeoViewpoint_3_75',geoSystem=['GDC'],position=(5.297423545807372,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.297423545807372,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca14-10.x3d'],child2Url=['../../tiles/4/Malacca14-11.x3d'],child3Url=['../../tiles/4/Malacca15-10.x3d'],child4Url=['../../tiles/4/Malacca15-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca7-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[392,233,61,127,62,41,19,24,32,28,9,5,6,7,6,9,6,6,4,8,5,4,541,37,304,107,42,32,22,19,21,18,9,7,7,6,5,4,5,9,6,8,8,6,66,261,44,49,43,38,21,72,6,8,4,6,6,5,6,6,6,5,2,4,7,4,33,36,56,24,327,31,32,23,37,6,5,5,5,4,6,3,8,8,7,8,8,6,161,31,63,64,189,37,15,29,17,0,5,5,5,7,6,7,5,6,6,2,4,6,55,20,25,46,42,27,24,72,11,5,5,6,5,6,7,8,8,4,7,2,5,3,8,16,26,25,29,20,20,22,7,5,5,5,5,6,6,6,6,6,8,8,7,7,19,15,70,23,10,5,37,6,5,6,7,6,6,5,5,6,6,7,8,8,5,5,28,18,13,45,9,5,9,14,6,6,6,7,8,3,3,3,4,5,6,8,7,5,18,19,17,32,177,74,65,5,6,6,6,7,4,6,4,3,2,5,6,5,7,6,36,32,18,10,21,51,39,5,4,6,6,6,6,7,8,5,4,6,4,6,4,6,23,20,17,14,12,41,4,6,6,4,5,7,9,6,5,5,7,3,4,3,6,7,16,9,17,8,7,68,4,5,6,6,5,7,7,9,4,6,6,7,5,4,6,5,15,14,18,12,4,7,4,4,4,5,7,6,3,5,7,6,8,6,6,6,3,5,12,33,5,9,7,10,5,7,5,5,5,5,6,7,4,5,5,8,4,4,6,5,52,14,14,11,5,1,6,5,6,3,4,3,3,8,9,6,8,6,6,6,6,5,78,11,25,9,5,3,5,5,3,5,6,4,6,6,6,5,6,8,8,6,5,8,72,14,5,8,7,4,4,3,5,5,6,5,7,1,6,7,5,6,3,7,5,6,79,149,8,4,5,6,4,4,3,4,4,5,7,7,7,4,6,8,7,6,4,9,21,6,5,6,5,4,4,2,1,4,4,6,7,5,3,5,7,5,7,4,6,7,9,12,5,6,6,6,4,5,2,3,3,5,6,6,5,6,3,4,5,9,5,7,12,12,6,6,5,6,5,5,2,8,3,4,5,7,6,6,4,4,7,9,4,4],
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
