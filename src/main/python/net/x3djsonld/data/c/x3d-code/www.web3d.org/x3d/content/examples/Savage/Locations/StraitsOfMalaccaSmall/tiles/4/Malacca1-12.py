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
        texture=ImageTexture(url=['../../images/4/Malacca1-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[71,8,8,13,81,82,5,3,3,4,4,4,4,7,3,4,5,9,-1,30,27,31,19,9,16,158,120,99,5,3,3,4,1,2,1,3,4,6,3,-2,16,23,25,107,6,11,35,47,12,10,3,3,4,6,4,0,-2,5,6,11,20,21,61,12,2,12,8,6,18,4,4,10,1,1,3,-2,5,2,2,1,0,15,56,36,8,5,19,3,7,0,5,4,8,10,9,2,7,9,9,1,9,8,5,0,28,21,7,3,34,13,2,3,2,1,7,3,-1,0,7,12,6,5,-4,44,6,5,26,35,11,6,-12,17,5,5,3,3,4,3,2,15,7,7,15,5,8,26,11,12,31,15,3,5,8,-1,0,3,0,0,9,7,13,17,8,5,5,2,6,14,18,5,20,4,5,30,13,0,7,4,3,27,9,16,16,3,65,7,26,5,11,27,0,6,0,16,5,7,-11,1,16,2,0,8,22,46,15,27,3,11,2,0,8,12,-6,2,4,0,-2,1,4,0,50,2,0,18,31,27,9,11,2,5,5,-25,34,4,6,15,12,19,0,1,16,0,19,1,0,15,24,10,10,6,7,8,8,9,8,25,47,3,9,0,2,11,7,0,13,7,5,2,22,5,10,40,16,5,3,27,6,78,21,4,6,2,14,16,9,0,0,7,14,7,5,17,0,17,15,7,7,16,21,42,4,4,5,25,2,10,9,17,1,2,10,16,22,1,-48,12,11,13,20,66,56,12,-3,7,13,20,10,31,12,12,1,5,6,7,12,3,4,7,3,25,44,35,13,8,4,9,24,29,4,1,8,6,4,1,8,4,2,0,6,-1,8,61,85,111,107,3,17,5,35,16,10,8,9,11,2,-7,2,5,11,-5,7,0,30,55,40,39,109,15,38,21,37,22,10,-3,7,7,0,1,4,3,3,5,-1,0,15,31,11,16,25,29,21,48,34,21,3,11,4,18,3,3,14,2,4,1,11,32,16,6,2,16,40,12,11,3,14,16,10,0,21,8,4,7,2,2,3,5,0,5,18,0,5,6,25,3,-3,2,6,16,7,3,9,2,1,6,5,7,6,5,4,10,11,8,5,36,8,9,15,27,36,19,6,11,0,10,3,5,7,10,5,-4,3,10,4,12,10,37,8,8,6,22,44,22,5,13,4,10],
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
