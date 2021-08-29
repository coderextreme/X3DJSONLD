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
        texture=ImageTexture(url=['../../images/5/newport19-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[84,84,84,81,81,78,76,76,76,75,74,73,71,68,66,63,59,55,50,46,42,35,31,84,83,82,80,79,78,77,77,75,73,73,71,70,67,65,62,58,53,49,45,41,36,31,84,83,82,82,80,78,77,76,76,73,72,70,68,65,63,60,56,52,47,44,40,35,30,83,82,80,80,81,80,79,75,75,74,73,70,68,64,62,58,55,51,47,43,38,35,30,84,82,80,80,80,80,77,74,74,73,72,70,67,64,61,57,53,49,46,42,37,34,29,83,82,80,80,78,77,76,74,73,71,70,68,66,63,60,56,53,48,45,40,36,33,28,83,82,81,81,79,78,74,73,72,71,68,66,64,62,59,56,52,48,45,40,35,31,27,83,82,82,81,80,78,73,72,70,70,67,65,62,60,57,54,51,48,44,39,34,29,25,82,82,82,82,79,77,74,71,69,67,66,63,61,58,55,52,49,46,43,39,34,28,24,81,82,81,79,77,74,72,69,67,65,65,62,59,57,54,51,48,45,42,38,33,28,24,79,80,79,77,75,71,70,68,65,64,62,60,57,55,53,50,47,44,41,37,32,27,23,78,79,77,75,74,73,71,67,64,64,61,57,56,54,52,49,47,44,40,37,32,27,23,80,80,79,76,75,74,73,69,65,62,60,57,55,53,51,48,46,43,40,36,32,27,23,81,81,79,76,75,73,71,70,65,61,59,57,55,52,50,48,45,42,39,35,32,27,24,82,80,79,77,74,72,70,68,64,60,58,56,53,51,49,47,45,42,38,34,31,27,23,82,80,79,77,73,70,68,65,62,60,58,55,52,50,48,46,44,42,38,34,31,27,22,81,79,77,75,72,70,68,65,62,60,57,54,51,49,48,45,43,40,37,33,30,26,22,79,79,78,75,73,70,68,66,62,59,56,53,50,48,47,45,42,39,36,32,29,25,22,79,77,76,74,72,69,67,64,60,57,54,52,49,47,46,44,40,38,35,31,28,25,21,79,76,73,72,71,69,66,61,58,55,53,51,49,47,45,43,39,36,33,29,27,24,20,77,74,72,70,69,67,64,60,57,55,53,51,48,46,44,43,40,36,33,29,26,23,19,76,73,70,67,65,63,62,60,57,55,53,51,49,46,44,42,39,36,33,29,26,24,20,74,72,69,67,64,62,61,59,57,55,53,51,49,47,44,42,39,35,33,29,26,24,21],
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
