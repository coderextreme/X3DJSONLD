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
        texture=ImageTexture(url=['../../images/5/newport20-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[74,72,69,67,64,62,61,59,57,55,53,51,49,47,44,42,39,35,33,29,26,24,21,72,70,68,66,63,60,59,59,58,56,53,52,50,48,45,42,38,35,32,28,25,22,19,68,65,62,60,58,57,57,58,57,55,53,52,50,48,45,42,39,35,32,28,24,21,17,63,62,61,59,56,55,55,57,55,52,51,50,49,47,45,42,38,35,31,27,24,20,17,59,58,58,58,56,55,54,54,52,51,50,49,48,47,44,41,38,35,31,27,24,21,18,56,56,55,55,53,51,51,51,51,50,49,48,47,46,43,40,37,34,30,27,23,20,17,53,53,52,52,52,51,50,50,50,48,47,46,46,45,42,39,36,32,29,26,23,20,16,51,52,53,52,51,51,49,48,48,47,46,45,44,43,41,38,34,31,28,25,23,20,17,49,49,49,49,49,47,45,45,46,46,45,44,43,41,40,38,35,32,28,24,22,20,17,46,45,45,47,47,46,44,44,44,43,43,43,42,40,38,37,35,32,28,25,22,19,16,44,43,42,43,45,46,43,42,42,42,41,41,40,38,37,36,34,32,29,26,22,19,16,41,41,42,41,42,42,41,40,41,41,40,39,39,38,37,35,33,30,28,25,22,18,15,38,39,41,38,40,40,40,41,40,39,38,38,38,38,37,35,33,30,27,24,20,17,14,37,38,39,39,40,41,39,39,41,37,38,38,37,37,36,35,33,30,28,25,21,17,13,35,36,35,36,36,37,36,36,36,36,37,37,37,35,34,33,32,30,28,25,21,17,14,32,34,34,34,36,36,35,35,35,35,36,36,35,35,33,32,30,28,26,23,20,16,14,30,31,32,33,34,35,36,35,33,34,36,35,35,34,32,30,29,27,25,22,20,17,14,30,30,30,30,30,32,34,34,33,35,35,34,33,32,31,29,28,26,25,23,21,18,16,31,30,30,30,29,30,32,32,31,32,33,34,33,32,31,30,29,28,26,24,22,19,17,31,29,29,30,30,30,30,32,32,32,33,34,33,33,32,32,31,29,27,24,22,19,16,30,29,30,31,30,30,30,31,32,33,34,35,34,34,34,34,33,31,29,25,22,18,16,29,29,30,32,32,31,30,31,32,34,35,36,36,36,36,36,34,33,30,27,23,20,17,31,31,31,32,33,32,32,32,32,35,36,37,37,37,37,37,35,34,31,27,24,21,18],
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
