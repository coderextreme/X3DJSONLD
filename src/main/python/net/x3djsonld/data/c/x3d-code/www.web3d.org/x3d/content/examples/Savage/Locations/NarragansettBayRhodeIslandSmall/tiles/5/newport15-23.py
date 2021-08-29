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
        texture=ImageTexture(url=['../../images/5/newport15-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[67,66,66,66,65,64,64,62,60,59,59,59,58,57,56,55,54,53,52,51,50,49,48,66,66,66,65,64,63,62,60,58,58,58,57,57,57,56,54,53,52,51,50,49,48,47,66,66,66,65,65,63,60,59,58,57,57,56,56,55,54,53,51,50,49,48,46,46,45,67,67,67,65,65,63,60,60,59,56,55,55,54,53,52,51,50,48,47,45,44,44,43,68,66,65,66,63,61,60,61,58,55,54,53,52,51,50,49,47,46,44,43,42,41,41,73,70,66,64,61,60,62,63,59,55,54,52,51,50,49,47,46,44,42,41,40,40,39,77,72,67,63,60,59,61,62,58,55,54,52,51,50,48,47,45,43,42,40,39,38,38,77,71,66,61,59,57,58,57,56,55,55,53,52,50,49,47,45,44,42,40,38,36,35,74,69,66,63,60,60,59,55,55,56,56,54,53,51,50,48,46,44,42,40,38,36,35,73,71,69,67,64,63,62,59,57,57,56,54,53,52,50,48,46,44,42,40,38,36,34,76,75,72,69,66,63,62,60,59,58,57,56,54,52,51,49,47,45,43,41,38,35,32,75,73,70,68,67,64,62,61,60,59,58,56,55,53,52,51,49,47,45,42,39,35,31,74,71,69,68,67,65,63,61,61,60,58,57,56,54,53,52,50,48,46,43,39,37,33,74,72,71,69,67,64,63,62,62,60,58,57,56,55,53,52,51,49,46,43,41,38,35,76,72,71,70,67,64,62,62,62,60,58,56,55,54,53,52,50,49,47,44,41,39,37,78,75,72,70,68,65,63,62,61,59,57,55,54,54,53,51,50,48,46,44,42,40,38,78,76,74,72,70,66,64,61,59,58,57,55,53,53,52,51,49,47,45,43,42,40,39,77,76,75,74,71,68,65,62,60,58,57,55,53,52,51,50,48,46,44,43,42,40,40,75,74,73,72,70,68,64,62,60,59,57,55,53,52,51,49,48,46,44,43,42,41,41,74,72,70,69,68,66,63,62,62,59,57,55,54,52,51,50,49,47,46,44,43,42,42,74,72,70,69,68,66,63,62,62,61,59,57,55,54,53,51,50,49,47,45,44,42,42,74,73,72,70,68,65,63,63,63,61,60,58,57,55,54,53,51,50,48,46,44,43,43,75,73,72,70,68,65,64,63,63,61,60,58,57,56,54,53,52,50,48,46,44,43,43],
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
