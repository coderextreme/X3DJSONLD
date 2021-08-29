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
    GeoViewpoint(description='GeoViewpoint_3_13',geoSystem=['GDC'],position=(1.4806733645214747,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4806733645214747,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca2-6.x3d'],child2Url=['../../tiles/4/Malacca2-7.x3d'],child3Url=['../../tiles/4/Malacca3-6.x3d'],child4Url=['../../tiles/4/Malacca3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[38,13,9,6,35,31,14,8,6,4,37,39,37,36,40,30,28,35,3,9,3,9,31,19,17,18,40,27,16,4,37,4,34,38,32,29,33,40,38,23,32,3,6,12,20,22,13,15,30,19,11,5,37,34,38,33,30,31,38,34,38,36,36,4,7,2,41,37,27,49,15,11,15,6,37,41,35,31,37,37,38,37,38,37,24,2,6,0,25,32,25,38,18,16,3,32,37,37,34,39,36,38,37,35,31,38,28,6,9,16,20,48,19,36,33,38,14,30,34,38,38,38,33,34,36,35,29,35,32,26,10,9,25,31,20,35,35,13,34,27,35,41,39,37,29,31,33,34,31,37,31,29,18,10,20,16,34,34,23,33,23,43,37,42,36,34,33,10,31,30,9,8,35,37,19,11,26,15,33,26,26,32,39,41,43,43,38,34,36,34,28,21,13,32,37,21,3,2,20,29,38,10,19,15,15,39,41,45,28,34,31,32,30,30,26,28,18,1,5,4,19,15,18,13,17,12,13,41,41,37,39,40,38,23,21,26,13,5,4,2,3,2,13,11,16,16,15,12,38,41,40,45,39,37,39,10,5,10,8,10,3,-6,9,9,29,11,25,26,19,13,16,37,40,41,41,36,36,36,34,16,3,3,0,11,21,28,9,22,14,28,16,7,8,35,13,34,31,37,36,35,14,4,3,6,6,27,32,32,13,5,12,20,34,9,31,19,6,27,37,34,37,29,8,-2,4,3,15,29,25,13,9,2,14,13,32,3,6,4,7,35,35,34,33,0,0,2,0,3,0,6,3,4,31,12,12,24,12,3,4,0,0,1,17,13,-3,-4,7,1,2,1,4,1,3,1,24,25,5,3,6,0,4,14,0,-17,0,-6,-4,-7,1,6,1,2,0,4,5,2,26,17,8,0,-20,6,3,3,9,2,3,-11,3,1,4,4,2,1,1,3,4,3,9,13,8,0,3,4,24,29,32,7,0,0,0,0,5,1,1,5,2,3,3,2,8,4,-5,6,6,8,31,21,33,28,25,0,3,1,2,1,1,3,3,1,5,3,11,5,-7,5,7,8,30,20,32,27,27,-2,5,0,2,4,2,3,3,2,5,2],
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
