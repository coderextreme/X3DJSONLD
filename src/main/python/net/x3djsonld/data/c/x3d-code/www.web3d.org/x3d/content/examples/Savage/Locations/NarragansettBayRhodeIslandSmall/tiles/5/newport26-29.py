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
        texture=ImageTexture(url=['../../images/5/newport26-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.20080872015217,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[39,40,41,42,45,50,54,61,65,67,67,70,72,71,66,59,56,60,67,70,69,68,67,38,40,41,42,44,51,57,61,66,68,67,69,72,71,65,58,57,63,69,69,68,68,67,38,38,40,42,43,50,56,60,65,68,67,67,68,66,60,56,59,67,71,71,70,69,69,38,38,39,40,42,44,52,61,65,67,65,63,62,60,56,55,65,73,74,73,72,71,70,39,40,39,39,40,42,46,55,64,65,63,58,55,53,52,55,67,74,76,76,75,74,72,39,40,41,41,41,41,42,44,48,55,56,54,51,50,51,57,66,72,75,77,78,76,74,39,40,41,42,43,44,45,45,44,44,46,48,48,49,51,56,64,70,75,78,79,77,75,38,40,41,42,43,44,46,48,46,45,45,46,47,48,50,53,59,62,69,74,76,77,75,38,39,41,42,43,44,47,48,47,46,46,47,48,50,52,53,55,55,59,62,63,64,64,37,38,40,41,42,43,45,47,46,46,47,48,50,53,56,59,63,64,67,69,70,64,62,36,38,39,40,42,43,44,45,46,46,47,49,50,52,55,59,63,66,68,70,72,73,75,35,37,38,40,41,42,44,45,47,48,48,49,50,52,54,57,62,65,68,69,70,71,73,34,36,37,39,41,43,44,46,47,48,49,49,50,51,53,56,61,65,67,68,69,70,71,33,35,37,38,40,42,44,46,47,48,49,50,50,51,52,55,58,62,65,67,68,69,69,32,34,36,38,40,42,44,45,46,47,48,50,51,51,52,53,55,59,62,65,66,67,67,31,33,35,37,39,42,44,45,45,46,47,48,49,50,51,52,53,56,60,63,64,65,65,30,32,33,36,39,41,43,44,45,45,46,47,48,49,50,52,53,54,57,60,62,62,62,29,31,30,31,38,41,42,42,43,44,45,46,47,48,50,51,53,54,57,59,60,61,61,27,26,26,28,35,39,41,42,42,44,45,46,47,47,49,52,54,56,59,60,61,62,61,27,29,27,29,33,37,40,42,44,45,45,46,47,47,50,54,56,58,61,63,64,64,64,28,29,26,27,32,37,40,42,43,44,45,46,48,52,54,57,58,61,64,66,66,66,66,25,26,26,27,33,38,40,41,43,44,46,48,53,58,57,58,61,64,66,67,68,67,67,24,25,27,28,34,38,40,41,43,44,46,49,54,58,58,60,63,65,67,69,69,68,68],
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
