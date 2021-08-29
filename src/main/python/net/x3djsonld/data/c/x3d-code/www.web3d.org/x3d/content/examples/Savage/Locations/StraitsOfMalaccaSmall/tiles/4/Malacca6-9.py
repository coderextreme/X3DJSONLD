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
        texture=ImageTexture(url=['../../images/4/Malacca6-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[77,98,69,69,105,212,62,52,63,37,19,44,34,21,6,14,21,25,13,33,25,23,61,68,62,62,109,79,56,39,77,28,34,17,18,11,17,7,28,25,28,50,23,59,79,69,60,67,67,64,74,45,34,46,66,41,16,14,23,23,36,34,45,54,71,44,96,84,73,88,69,85,83,41,26,49,17,31,26,10,26,25,31,33,29,48,65,34,93,80,80,81,67,65,47,46,39,27,37,15,15,19,25,19,32,48,43,48,70,34,86,88,71,83,57,127,49,29,16,18,39,13,18,14,21,18,26,54,47,31,46,38,69,86,62,77,71,84,72,68,52,15,25,13,33,33,31,20,35,40,63,42,34,39,66,63,79,61,47,70,67,58,24,44,26,18,25,39,18,47,26,46,32,46,32,52,80,69,75,54,59,59,68,47,47,25,14,18,26,37,21,32,41,24,33,31,47,42,73,82,58,53,49,57,39,50,43,25,19,18,22,21,51,26,44,25,35,40,40,37,60,60,45,46,42,46,61,39,27,47,14,27,29,21,46,39,31,25,67,43,35,40,45,42,30,45,42,27,62,50,35,28,20,20,34,17,30,42,29,44,61,54,56,33,36,50,32,43,37,26,64,44,40,40,14,15,21,29,43,24,51,62,76,56,119,61,57,111,74,34,47,38,42,29,44,37,18,27,37,40,48,36,59,66,68,115,99,49,39,46,74,35,33,40,40,50,49,42,24,22,54,26,34,37,53,49,63,95,77,69,40,42,39,47,50,22,39,28,48,44,26,27,62,18,38,39,42,50,61,78,119,69,60,41,37,99,48,29,34,35,32,21,22,28,18,26,35,63,60,63,64,86,89,61,53,65,37,43,36,43,43,33,45,38,20,76,22,34,34,73,48,53,54,72,69,61,70,48,47,68,64,41,45,43,32,37,16,22,31,39,30,73,72,84,66,98,58,58,102,76,64,63,70,51,47,44,37,32,24,31,32,37,117,44,90,91,77,57,57,71,100,61,72,67,64,46,50,42,47,32,24,38,40,46,205,39,62,66,71,55,49,69,77,97,79,69,56,60,68,52,32,37,26,30,39,131,49,38,95,103,69,53,86,68,83,110,82,65,57,61,61,53,34,40,23,31,43,135,45,33,90,112,65,53,89,67],
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
