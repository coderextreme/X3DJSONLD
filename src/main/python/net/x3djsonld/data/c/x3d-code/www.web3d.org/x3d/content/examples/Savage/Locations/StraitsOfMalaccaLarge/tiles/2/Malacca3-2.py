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
    GeoViewpoint(description='GeoViewpoint_2_32',geoSystem=['GDC'],position=(6.391418833468428,102.91900048008048,448023.77127998625),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(6.391418833468428,102.91900048008048,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca6-4.x3d'],child2Url=['../../tiles/3/Malacca6-5.x3d'],child3Url=['../../tiles/3/Malacca7-4.x3d'],child4Url=['../../tiles/3/Malacca7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.19252382,zDimension=22,zSpacing=0.19188096,height=[19,22,1041,979,208,131,111,245,309,389,1145,222,13,5,7,7,-99,-99,-99,-99,-99,-99,27,39,1152,1275,438,309,252,454,133,276,133,329,42,4,6,7,-99,-99,-99,-99,-99,-99,140,71,1948,760,270,386,396,222,260,754,762,151,47,7,6,5,-99,-99,-99,-99,-99,-99,106,81,534,1702,345,118,151,149,191,176,746,39,12,7,4,6,-99,-99,-99,-99,-99,-99,743,739,736,1311,485,235,76,409,537,428,26,24,6,4,8,6,-99,-99,-99,-99,-99,-99,599,261,769,1323,577,1130,153,132,646,559,18,6,5,6,7,7,-99,-99,-99,-99,-99,-99,1046,237,452,757,1096,126,303,81,160,19,13,5,5,5,5,2,-99,-99,-99,-99,-99,-99,133,295,841,339,436,92,31,219,13,6,5,5,5,4,5,4,-99,-99,-99,-99,-99,-99,139,625,858,1272,158,31,20,183,4,5,4,5,7,8,7,5,-99,-99,-99,-99,-99,-99,177,545,121,469,96,24,7,7,6,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,299,448,39,29,33,10,6,5,5,5,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,272,55,42,25,8,5,4,4,5,5,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,68,32,17,63,3,3,4,4,4,6,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,34,2,2,4,4,3,5,4,4,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,3,5,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,4,4,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,3,3,5,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,2,3,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,3,1,2,3,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,4,1,2,3,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,1,3,3,3,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,2,3,3,3],
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
