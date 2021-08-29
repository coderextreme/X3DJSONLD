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
    GeoViewpoint(description='GeoViewpoint_3_12',geoSystem=['GDC'],position=(1.4806733645214747,100.87606259915093,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4806733645214747,100.87606259915093,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca2-4.x3d'],child2Url=['../../tiles/4/Malacca2-5.x3d'],child3Url=['../../tiles/4/Malacca3-4.x3d'],child4Url=['../../tiles/4/Malacca3-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[37,29,29,26,31,17,36,34,25,27,29,39,37,32,34,38,23,23,33,49,38,38,39,44,28,22,38,18,29,37,31,24,36,45,42,26,39,25,22,31,49,38,25,31,36,34,27,28,28,41,34,38,38,21,37,36,36,29,25,16,20,50,53,29,21,20,35,33,40,41,31,32,16,41,42,33,15,27,38,29,11,17,18,41,60,24,35,41,32,33,32,45,36,28,29,33,43,36,11,31,16,28,8,27,37,48,53,19,22,25,29,27,29,41,37,30,26,29,37,24,12,25,36,30,32,22,43,37,29,16,21,20,21,22,38,29,35,33,23,43,41,38,29,31,9,29,29,15,14,28,12,14,22,25,32,22,15,42,32,29,25,35,33,29,24,20,12,20,16,30,14,34,14,15,23,20,44,16,13,30,37,30,11,17,26,23,15,20,9,12,5,23,10,23,9,24,37,26,24,33,27,15,24,21,29,11,28,27,17,16,10,14,15,23,7,11,20,38,21,20,23,16,12,49,42,59,50,25,9,10,23,19,23,19,12,28,10,10,14,32,22,19,17,14,46,49,19,60,36,18,20,32,18,15,13,12,8,23,7,33,36,16,12,13,16,61,34,41,19,32,33,14,24,36,15,14,13,8,20,17,18,22,12,34,22,29,44,34,35,35,34,16,27,11,22,17,10,15,25,25,12,14,6,12,24,32,27,9,43,36,33,15,15,6,7,7,12,10,26,12,26,35,25,9,6,10,32,26,9,13,39,22,36,25,15,30,16,9,9,24,15,6,11,17,3,29,5,22,13,13,24,9,49,40,32,31,35,39,13,22,9,10,30,16,26,11,13,20,8,24,19,20,33,31,52,62,40,46,37,30,21,16,22,12,8,5,18,8,9,10,2,3,33,32,9,24,39,57,52,34,38,45,35,12,19,8,14,13,7,6,9,24,4,21,33,32,27,26,24,15,38,25,14,15,19,33,33,10,8,20,12,6,3,16,25,31,32,32,9,9,27,14,19,22,38,18,13,37,18,27,21,21,3,1,2,6,23,27,31,32,13,8,33,19,24,20,38,19,18,37,11,24,16,19,3,3,2,5,25,27,30,32,10,11],
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
