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
        texture=ImageTexture(url=['../../images/4/Malacca7-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[67,96,77,100,73,85,105,101,57,88,73,78,281,247,482,555,424,274,75,52,27,20,80,74,78,58,80,89,85,97,50,134,278,301,502,81,432,131,184,59,40,48,33,29,70,48,61,82,89,84,90,58,141,72,563,386,257,75,119,45,53,27,41,32,22,34,59,51,73,79,131,113,89,64,262,109,292,265,147,70,35,58,32,28,32,16,26,15,80,71,65,91,100,112,186,196,168,33,198,94,73,50,31,46,34,31,16,29,12,18,49,74,69,57,127,52,196,471,95,43,92,45,52,33,35,53,32,54,17,21,10,10,79,69,80,95,56,55,214,315,58,80,87,43,52,29,33,30,17,15,14,7,9,6,74,79,70,62,72,35,282,289,46,45,33,46,28,27,17,25,10,21,12,17,8,10,80,72,90,80,102,29,39,68,65,52,34,27,26,24,16,12,7,25,27,16,7,13,60,46,70,49,48,34,21,12,21,37,31,27,22,25,26,26,52,19,20,18,12,23,61,65,152,39,27,36,30,22,20,17,15,16,17,19,12,36,42,22,6,13,23,11,51,71,77,62,85,32,23,24,28,33,26,26,7,14,12,28,39,29,16,17,32,46,51,63,55,121,40,39,27,57,49,40,23,15,7,20,15,32,35,31,31,34,30,29,53,105,56,53,55,26,21,58,68,68,16,36,15,29,20,12,33,33,34,32,18,23,40,72,75,40,26,26,32,30,63,31,26,56,27,31,32,19,29,23,30,43,38,23,41,68,52,20,15,8,22,30,68,25,54,40,41,58,87,31,27,15,19,29,52,48,32,57,58,38,19,17,30,52,149,42,44,47,40,75,52,26,32,15,19,31,23,27,35,58,46,27,24,123,34,52,89,91,42,42,40,68,24,32,31,19,24,18,34,33,33,24,52,40,25,26,36,48,58,66,56,34,62,57,15,32,32,32,34,34,32,17,44,23,63,30,28,46,33,43,57,25,38,16,42,57,24,33,32,34,32,37,35,14,30,28,86,35,23,22,32,45,35,56,41,22,19,30,10,31,35,33,34,31,21,10,24,40,24,30,32,19,47,53,42,50,54,34,16,16,34,31,32,33,34,18,25,21,21,27,20,31,28,22,45,49,47,53,47,28,21,16,33,35,31,33,33,21,26,21],
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
