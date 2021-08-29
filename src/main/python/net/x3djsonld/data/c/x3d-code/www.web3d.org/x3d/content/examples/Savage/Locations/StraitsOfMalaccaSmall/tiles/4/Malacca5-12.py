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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca5-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[61,46,53,48,42,24,22,50,27,40,80,59,3,2,3,3,3,2,3,3,3,3,54,28,43,90,64,45,28,42,56,57,113,29,2,2,1,3,2,3,2,2,1,1,58,69,59,80,39,36,43,38,58,62,34,9,1,1,2,3,4,2,3,3,2,3,49,74,77,64,31,60,39,30,40,77,17,16,1,3,1,4,2,3,4,3,2,3,104,160,53,142,46,82,48,66,68,87,32,3,4,2,2,2,1,3,2,1,3,4,47,57,95,67,64,67,45,69,68,65,3,2,2,4,5,2,2,3,2,2,1,3,75,92,132,52,76,54,29,61,56,4,3,6,2,2,3,7,3,3,1,2,2,3,81,54,74,64,54,65,53,61,35,3,5,4,5,5,2,1,4,3,2,3,2,4,68,94,65,108,74,35,121,60,43,5,3,3,3,3,5,3,4,3,2,3,3,1,51,92,50,53,34,60,80,43,34,5,4,5,3,5,5,6,4,3,3,3,4,3,49,44,54,96,28,69,54,60,32,9,3,4,3,2,4,3,5,4,3,4,2,3,85,43,39,48,31,52,46,39,31,8,2,4,5,5,4,5,5,1,3,4,3,2,76,33,45,23,38,42,46,33,31,4,5,6,3,5,5,3,2,57,6,5,3,4,51,36,113,27,77,36,61,13,30,3,3,3,2,3,4,5,264,306,1,3,4,3,62,122,34,57,53,31,18,16,28,4,3,5,4,3,4,4,3,2,4,4,4,4,49,87,38,17,49,34,14,19,4,3,4,3,3,3,4,5,4,4,5,3,4,4,30,30,67,8,29,50,10,3,4,3,2,3,2,4,4,4,4,5,3,4,3,4,17,48,29,9,18,29,2,1,4,2,2,3,0,4,4,4,3,3,3,3,4,3,16,10,11,11,10,10,3,2,4,3,3,4,3,5,4,4,3,1,4,3,4,4,11,9,17,25,10,4,4,1,2,3,2,2,4,4,4,4,4,3,3,4,3,3,14,30,30,14,2,2,2,3,2,2,4,4,3,4,2,4,4,3,3,3,5,3,17,13,8,27,1,3,3,3,3,3,1,3,3,4,1,3,4,3,3,3,3,3,33,12,7,34,1,4,4,2,2,3,0,4,3,3,2,5,3,3,3,3,3,4],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
