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
        texture=ImageTexture(url=['../../images/5/newport17-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[69,69,71,70,75,76,81,86,87,85,85,87,86,87,87,84,82,81,83,78,68,67,70,70,70,69,73,80,86,86,88,91,92,91,87,82,79,78,75,75,75,73,71,70,69,70,73,72,72,80,85,90,90,93,96,93,93,87,79,71,70,69,61,62,65,65,72,71,74,78,79,81,83,89,93,97,98,96,96,91,80,69,59,58,59,67,69,69,70,74,79,86,87,85,86,88,93,94,96,99,102,98,90,78,61,56,57,61,69,70,73,79,83,92,92,84,87,94,91,91,95,98,99,100,94,85,72,57,53,57,64,66,72,82,86,87,92,88,86,91,99,96,94,99,100,98,92,83,70,63,53,54,60,62,68,77,83,83,84,87,87,86,91,98,92,91,91,93,87,76,66,60,56,55,59,61,67,70,78,82,83,83,88,88,87,87,86,86,86,84,78,70,61,60,56,59,60,61,66,66,70,73,75,78,82,84,82,85,83,77,74,75,75,72,64,58,53,56,61,62,66,67,64,65,68,72,76,83,86,84,75,71,68,67,70,71,67,58,55,55,60,60,67,62,59,59,63,70,73,78,81,79,74,71,65,63,65,66,63,58,55,53,60,61,73,62,56,55,59,64,69,73,79,77,69,67,65,60,58,57,59,58,55,54,56,57,75,66,58,53,54,59,64,68,72,69,65,59,61,59,56,56,58,53,52,53,54,54,75,70,60,51,51,55,59,60,60,60,57,59,58,54,55,55,52,50,49,50,52,52,77,72,66,55,49,51,50,50,51,55,56,57,56,59,56,50,47,48,47,47,48,48,76,71,64,60,55,50,49,45,44,48,55,57,56,58,55,53,50,47,46,46,47,47,70,69,69,63,55,49,47,48,47,50,51,56,58,55,54,54,49,47,47,44,45,46,65,64,66,65,59,55,50,46,47,49,50,54,60,59,54,51,49,47,46,44,46,47,60,61,64,63,59,55,48,50,46,49,52,54,59,62,53,49,46,46,47,46,45,44,56,59,62,59,54,52,47,46,51,51,53,54,55,60,58,49,48,47,49,46,48,48,54,55,53,54,55,52,51,51,50,55,54,55,56,54,57,53,49,50,49,53,52,52,53,52,51,51,49,49,51,54,50,51,56,58,60,54,55,53,55,53,51,48,47,48,53,53,51,51,49,50,51,53,50,51,57,59,59,55,56,53,56,53,51,48,48,48],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
