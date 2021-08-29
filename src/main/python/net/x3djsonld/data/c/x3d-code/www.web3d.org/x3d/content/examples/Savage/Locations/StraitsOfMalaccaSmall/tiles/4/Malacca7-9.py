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
        texture=ImageTexture(url=['../../images/4/Malacca7-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[83,110,82,65,57,61,61,53,34,40,23,31,43,135,45,33,90,112,65,53,89,67,93,79,80,76,64,70,76,65,41,32,41,51,56,68,40,105,75,77,65,67,47,80,86,72,76,73,59,68,64,69,42,30,36,44,48,72,57,61,70,77,83,79,57,70,68,68,63,68,53,62,72,74,45,28,35,36,57,161,60,41,48,70,76,58,42,59,91,69,59,78,65,58,93,53,39,42,66,33,64,96,69,54,36,59,80,73,58,80,85,77,58,66,58,50,73,68,36,56,53,56,68,122,50,37,36,51,58,40,61,49,81,65,78,79,68,53,71,59,41,49,47,53,64,52,46,44,54,42,72,38,75,79,81,66,75,83,70,55,81,54,58,48,56,67,60,76,43,60,41,65,47,64,59,74,73,69,69,91,57,66,72,70,45,51,64,161,41,49,53,33,59,56,74,55,67,80,78,89,73,64,51,72,62,73,56,46,63,45,52,44,43,36,48,73,85,75,63,60,88,85,86,76,54,68,44,57,41,51,62,86,72,40,40,39,48,86,78,61,62,61,79,76,80,76,70,55,58,51,51,73,58,50,47,38,29,56,69,55,42,50,64,51,77,71,97,62,55,69,88,51,59,76,53,73,51,36,31,58,65,60,36,56,57,51,70,58,82,60,76,75,107,75,70,61,72,62,44,40,48,43,56,46,51,54,30,53,69,81,54,76,80,65,62,76,54,69,68,63,55,77,53,37,58,20,32,32,51,40,62,62,56,60,82,83,77,73,70,84,51,67,56,56,36,21,30,33,73,52,32,41,58,62,61,58,48,67,58,62,69,75,56,63,47,62,42,34,44,58,67,57,23,32,63,51,48,70,61,49,54,51,76,82,74,69,63,40,79,39,58,60,77,68,40,35,66,58,59,58,52,55,44,75,61,74,74,63,68,50,72,46,66,78,52,66,14,33,67,68,54,67,52,47,38,59,60,84,76,74,84,63,66,67,51,68,43,58,47,44,59,47,47,63,50,44,33,46,81,75,63,80,91,66,77,61,46,58,42,30,50,30,85,53,65,50,54,34,47,57,64,81,65,84,67,73,69,55,59,62,42,41,35,24,86,61,68,51,59,40,51,59,79,90,66,82,62,63,59,57,58,59,37,43,32,21],
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
