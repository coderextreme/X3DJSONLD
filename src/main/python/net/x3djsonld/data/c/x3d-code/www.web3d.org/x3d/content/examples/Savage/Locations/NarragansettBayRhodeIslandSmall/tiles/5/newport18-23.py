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
        texture=ImageTexture(url=['../../images/5/newport18-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[79,80,79,75,74,73,69,69,69,69,68,66,65,65,64,63,62,61,59,58,56,54,53,80,80,75,72,73,72,70,68,67,68,67,66,65,64,63,63,62,60,59,57,56,54,52,80,77,74,71,72,71,70,68,68,67,67,66,65,64,63,62,61,60,58,57,55,53,52,79,76,74,71,71,70,69,67,66,66,66,66,65,64,63,62,61,59,58,57,55,53,51,77,75,73,71,70,68,67,66,66,66,66,65,64,64,63,61,60,59,57,56,54,52,51,76,73,71,71,71,68,67,67,68,66,66,65,64,63,62,61,60,58,56,55,53,51,51,77,73,71,71,70,69,68,66,64,64,65,65,64,63,62,61,59,57,55,53,51,50,49,76,73,71,71,70,68,68,67,64,64,65,65,65,64,62,61,59,58,56,54,51,49,48,76,73,73,72,70,69,68,67,66,65,65,65,65,64,63,62,60,59,57,55,52,50,48,78,75,75,75,72,69,68,67,65,65,65,65,65,64,63,62,60,59,57,54,52,50,48,81,76,76,75,72,70,69,68,67,67,66,65,65,65,63,62,60,59,57,54,52,50,47,82,78,77,75,73,71,70,70,69,69,68,67,66,65,64,63,61,59,57,54,52,50,47,83,81,79,76,74,73,72,71,70,69,69,67,66,65,64,63,61,59,57,54,52,49,46,83,82,80,78,75,74,74,73,72,72,71,69,68,66,65,64,61,60,57,54,51,48,44,83,82,81,78,76,75,76,75,75,74,72,71,70,68,66,64,62,60,57,53,50,47,44,83,83,82,80,78,76,77,79,79,76,73,72,70,69,66,64,62,59,57,53,49,46,42,84,84,82,80,78,77,78,79,79,76,74,72,71,69,67,64,62,58,56,52,48,44,40,85,84,82,80,79,79,78,78,77,75,73,72,71,69,67,64,62,58,55,51,46,42,38,86,85,83,81,81,80,79,77,75,75,74,72,71,70,67,65,62,58,54,50,45,41,36,86,84,83,82,81,80,79,78,76,75,74,73,71,70,67,64,61,57,53,48,44,39,35,84,84,84,83,82,80,79,77,77,76,74,73,72,70,67,64,60,56,51,47,42,37,34,84,85,85,82,81,78,76,76,76,76,75,73,72,69,66,63,59,55,51,46,41,36,31,84,84,84,81,81,78,76,76,76,75,74,73,71,68,66,63,59,55,50,46,42,35,31],
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
