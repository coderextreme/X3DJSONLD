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
    GeoViewpoint(description='GeoViewpoint_3_55',geoSystem=['GDC'],position=(4.0251734853787395,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.0251734853787395,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca10-10.x3d'],child2Url=['../../tiles/4/Malacca10-11.x3d'],child3Url=['../../tiles/4/Malacca11-10.x3d'],child4Url=['../../tiles/4/Malacca11-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[97,66,23,39,31,18,10,32,7,7,7,3,6,5,4,3,4,5,5,7,2,0,63,59,36,51,43,24,19,31,8,6,3,5,3,4,5,5,3,3,3,3,2,3,45,30,35,151,38,29,14,14,10,8,4,6,4,6,3,4,5,4,2,5,4,5,66,101,66,60,55,36,13,7,4,7,4,4,5,4,4,5,6,4,4,7,5,4,269,665,83,190,66,32,19,5,15,4,2,4,3,4,4,3,5,4,4,5,0,1,760,816,125,329,349,57,17,6,7,6,3,4,4,2,4,4,6,7,3,4,5,3,593,531,331,334,256,41,27,20,11,9,46,3,3,3,6,4,5,6,6,6,2,4,427,214,140,59,46,38,17,9,57,31,11,3,6,6,7,5,6,4,6,5,5,6,333,154,99,105,21,28,29,31,28,81,7,4,4,5,2,5,5,5,5,4,4,5,178,220,178,32,25,15,52,50,43,50,8,5,5,2,4,4,8,4,4,7,4,6,105,129,45,46,25,24,74,43,54,49,13,6,9,6,5,3,4,6,5,4,3,4,363,77,93,51,54,29,45,37,49,48,6,8,6,6,4,5,5,7,5,4,4,4,446,105,89,29,51,43,103,58,35,67,11,7,6,6,4,7,5,5,6,4,4,4,240,115,86,42,52,58,211,166,45,201,12,5,5,8,2,6,5,7,5,6,4,6,136,203,69,93,42,60,67,37,29,44,26,8,5,5,6,6,5,5,7,7,4,3,165,117,205,162,124,41,31,38,11,31,15,8,7,4,5,6,7,6,7,5,7,6,235,182,111,109,127,52,44,36,40,37,6,5,6,7,6,6,6,5,6,7,5,8,165,238,57,75,34,72,45,21,25,48,14,9,1,7,5,8,6,5,7,7,5,6,155,127,110,81,41,176,61,26,18,63,13,17,2,6,5,5,7,7,8,6,5,6,347,144,109,108,71,302,40,35,29,27,21,9,4,6,4,6,6,6,6,7,7,5,691,127,56,110,76,159,33,21,20,20,12,9,56,5,5,6,7,7,6,6,8,7,701,121,51,108,81,143,45,18,22,23,27,9,37,4,6,6,7,7,6,6,7,6],
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
