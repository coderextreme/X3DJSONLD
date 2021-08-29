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
        texture=ImageTexture(url=['../../images/4/Malacca0-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[4,4,2,3,6,7,4,4,3,1,1,0,2,0,6,1,5,1,3,0,1,-2,2,3,3,5,5,7,6,5,5,2,0,1,-1,-1,0,2,3,2,1,0,2,1,1,2,2,2,5,7,8,8,7,2,3,4,1,0,0,1,3,2,2,1,-12,8,3,4,1,3,3,4,4,8,6,5,3,2,3,0,0,0,0,1,1,4,17,2,4,5,2,5,2,2,0,3,8,6,2,5,3,3,2,2,1,0,0,0,36,4,5,4,4,9,0,2,4,4,5,8,6,6,5,2,0,29,1,0,0,1,0,0,7,3,7,4,4,-2,0,2,2,1,5,7,9,6,2,71,1,-1,0,1,2,-1,5,6,7,3,6,0,4,4,1,5,8,5,7,6,4,16,4,2,-1,0,0,0,5,5,3,5,3,4,6,0,2,3,1,4,3,6,9,7,5,2,1,2,0,0,3,4,6,5,7,9,7,5,4,4,2,5,10,4,8,8,11,3,4,0,0,0,3,5,4,6,6,10,6,4,5,1,5,1,5,5,4,5,8,5,3,2,3,2,4,4,4,4,5,8,6,5,4,3,5,1,2,3,4,5,3,3,3,7,8,6,6,5,2,4,5,4,6,5,5,6,5,4,3,4,4,5,6,5,5,-3,-4,-1,6,3,5,2,4,7,5,7,6,6,7,7,0,6,1,4,3,1,7,7,-1,-4,5,3,1,4,3,7,4,5,6,5,5,6,5,4,2,2,4,6,2,2,0,19,3,5,25,6,2,7,0,4,6,12,1,6,5,5,1,5,2,3,4,0,5,24,0,-3,62,8,3,12,2,92,7,9,7,4,5,8,3,0,2,0,2,-2,24,28,4,11,15,6,6,3,13,19,4,4,6,8,8,7,9,5,1,8,5,-2,-1,3,21,18,9,10,6,7,45,41,3,4,3,9,1,6,6,4,5,8,31,71,9,5,25,112,16,2,11,11,8,11,5,2,2,3,4,1,1,4,3,1,9,28,4,32,160,22,-4,9,14,41,6,3,6,6,6,6,5,4,7,4,9,5,9,74,27,47,66,10,6,15,60,101,4,4,4,5,4,6,3,6,6,0,5,11,2,41,32,35,71,8,8,13,81,82,5,3,3,4,4,4,4,7,3,4,5,9,-1,30,27,31],
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
