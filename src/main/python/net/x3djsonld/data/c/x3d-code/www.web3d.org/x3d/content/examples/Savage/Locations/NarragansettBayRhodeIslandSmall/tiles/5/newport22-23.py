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
        texture=ImageTexture(url=['../../images/5/newport22-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[45,47,48,45,44,44,45,44,44,44,44,43,44,43,41,39,37,35,34,33,32,32,33,45,46,46,45,44,45,44,44,44,44,44,44,44,43,42,40,38,36,35,33,32,32,33,47,45,45,46,46,43,42,42,42,44,45,45,44,43,42,41,39,37,36,34,33,33,33,47,47,46,45,43,42,42,42,44,45,45,45,44,43,42,41,39,38,36,35,34,33,32,44,44,45,45,44,43,43,43,44,46,46,45,45,44,43,41,40,38,37,35,34,33,32,41,42,44,46,47,45,45,45,45,46,47,46,45,45,44,42,40,39,37,35,34,33,32,41,43,44,44,46,46,46,47,46,46,46,46,45,45,44,42,40,39,37,35,34,32,31,42,44,44,44,46,46,46,46,46,46,46,45,45,44,43,41,40,39,37,35,34,33,31,41,44,44,44,45,45,46,47,48,48,47,46,45,44,42,41,40,38,37,35,34,32,30,40,42,44,44,44,46,46,48,50,50,49,47,46,44,43,41,39,37,36,35,33,31,29,44,44,45,46,46,46,46,49,52,52,50,49,47,45,43,41,39,37,35,34,32,31,29,47,47,46,47,47,47,47,50,52,52,51,49,48,47,44,42,39,37,35,33,31,30,28,50,50,49,49,49,48,49,50,52,52,50,49,48,47,45,42,39,37,35,33,31,30,28,52,51,50,49,50,51,51,51,51,52,51,50,49,46,44,42,39,37,35,33,31,30,28,53,52,51,51,53,56,55,53,51,51,51,50,48,45,43,41,40,38,35,33,31,29,28,54,52,53,53,54,57,57,55,52,50,50,48,46,45,43,41,39,37,36,33,31,29,27,55,53,52,55,55,56,55,55,54,53,51,48,46,44,42,40,38,36,35,33,31,30,28,56,54,52,55,57,58,56,55,55,54,52,49,46,43,41,39,37,35,34,33,31,30,28,57,55,52,54,57,60,59,55,53,53,52,50,46,43,41,38,36,34,33,32,31,28,27,55,55,57,57,58,57,56,53,52,51,50,48,46,43,41,38,36,34,33,31,29,27,25,55,56,57,58,56,54,53,53,53,52,50,47,45,43,41,38,36,35,33,31,29,27,25,55,56,56,55,54,53,54,52,52,49,47,46,43,42,40,39,36,35,32,30,29,27,25,52,53,54,53,53,54,55,52,51,48,46,45,43,41,40,38,36,34,32,30,28,26,25],
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
