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
    GeoViewpoint(description='GeoViewpoint_3_15',geoSystem=['GDC'],position=(1.4806733645214747,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4806733645214747,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca2-10.x3d'],child2Url=['../../tiles/4/Malacca2-11.x3d'],child3Url=['../../tiles/4/Malacca3-10.x3d'],child4Url=['../../tiles/4/Malacca3-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[1,0,1,3,6,2,2,6,6,5,5,6,2,5,0,-2,3,3,0,0,6,8,2,0,3,4,3,4,3,1,6,6,5,4,0,0,0,2,3,1,1,2,2,8,1,1,1,4,2,2,2,3,4,4,5,7,3,1,3,2,0,-1,1,1,6,5,0,1,2,3,5,0,0,1,5,5,3,3,0,2,3,5,0,4,8,10,5,0,2,1,1,1,3,3,3,3,4,3,7,4,11,0,5,4,-5,4,9,8,0,7,3,3,2,1,2,2,1,1,4,4,7,3,7,9,6,4,6,8,9,9,20,26,2,4,1,1,3,3,3,0,2,5,5,6,10,8,7,2,-7,14,12,20,33,25,2,4,1,1,1,1,3,4,0,4,4,8,10,12,20,15,13,10,26,17,43,63,0,3,1,1,1,1,3,4,3,2,3,4,17,10,17,7,14,9,25,20,38,45,1,0,2,1,2,1,3,2,4,3,0,0,14,15,7,12,28,11,21,-6,39,28,0,3,0,1,1,4,1,2,1,1,5,11,11,6,7,8,51,23,10,7,4,18,0,3,2,2,2,1,2,2,2,1,3,12,13,10,10,11,24,13,4,32,21,10,2,4,2,2,3,0,1,0,3,4,0,15,9,13,33,54,36,39,35,21,27,15,2,1,3,2,3,2,4,0,5,-1,9,9,17,26,69,62,38,13,42,11,17,32,6,2,1,2,3,1,0,2,14,9,11,11,11,16,305,180,75,15,33,37,47,64,3,4,4,3,3,5,-1,7,6,14,9,9,9,33,99,129,32,26,37,59,51,36,6,4,5,3,3,7,8,8,9,13,14,12,11,16,62,87,36,26,43,90,61,92,5,3,3,5,12,8,10,13,7,12,12,11,12,35,40,65,42,40,49,86,49,53,4,2,5,10,7,9,12,9,14,14,10,9,27,137,66,57,50,55,57,43,22,33,11,3,10,9,10,13,12,10,12,8,15,24,40,77,43,34,67,66,27,34,22,36,8,6,15,11,10,9,16,8,10,16,42,41,67,48,58,52,41,36,41,33,37,19,10,6,14,16,11,11,15,9,8,16,29,42,74,48,57,51,45,34,40,29,33,19],
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
