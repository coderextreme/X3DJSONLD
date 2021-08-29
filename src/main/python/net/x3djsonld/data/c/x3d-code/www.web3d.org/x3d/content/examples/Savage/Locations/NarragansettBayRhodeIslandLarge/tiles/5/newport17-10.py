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
        texture=ImageTexture(url=['../../images/5/newport17-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[42,43,42,45,51,58,65,66,65,67,65,65,64,66,73,76,76,70,69,69,70,69,42,40,44,48,53,62,69,71,70,66,64,64,62,64,66,67,71,71,69,67,70,70,41,44,47,48,55,64,71,76,74,68,63,64,60,63,66,68,65,68,68,68,69,69,42,46,47,50,57,66,72,76,76,71,63,63,64,69,64,63,64,66,68,69,71,72,49,47,45,55,60,65,69,72,71,70,65,65,66,66,63,63,63,68,71,70,69,70,48,45,47,52,59,66,69,70,72,70,67,65,65,62,65,63,63,66,69,66,71,73,49,45,47,51,58,63,68,71,73,75,72,68,65,65,65,63,61,62,63,66,69,72,42,46,46,49,57,60,65,72,76,80,79,75,69,64,65,62,64,64,65,64,65,68,44,44,45,47,54,59,64,72,76,81,80,81,77,71,67,68,68,65,63,64,66,67,40,43,45,46,50,54,63,68,76,81,83,84,84,77,70,69,71,73,69,67,66,66,40,41,43,49,46,51,60,66,72,77,85,86,84,79,70,73,78,73,73,70,66,66,39,40,41,48,51,53,56,62,66,71,77,81,81,80,75,76,77,76,76,78,70,67,40,40,43,46,51,50,54,57,63,67,71,78,78,80,75,75,77,79,80,77,75,73,42,40,42,42,47,52,53,56,59,63,68,71,73,73,72,74,79,83,84,81,75,75,44,47,46,43,47,55,57,53,54,56,61,65,68,69,70,72,78,83,84,81,77,75,44,48,48,48,46,51,50,51,51,53,55,58,60,64,68,71,73,81,83,79,79,77,53,47,43,45,44,42,44,47,53,56,51,54,58,59,63,67,72,76,80,79,78,76,48,49,45,44,42,40,41,43,48,49,52,53,55,58,61,66,71,74,75,76,72,70,46,43,43,41,40,40,42,45,52,53,51,50,52,54,61,68,68,70,72,72,66,65,49,50,43,49,45,43,44,45,46,53,55,56,56,55,58,62,64,65,65,65,62,60,54,54,46,45,49,48,46,48,45,48,54,54,53,56,56,56,59,61,61,61,57,56,58,53,51,50,49,46,51,46,46,49,52,57,53,54,57,56,56,56,55,52,54,54,58,52,55,51,50,54,56,52,47,44,51,52,53,54,57,56,56,51,51,50,52,53,57,52,55,52,51,55,56,53,47,44,50,52,53,54,57,56,56,51,50,50,53,53],
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
