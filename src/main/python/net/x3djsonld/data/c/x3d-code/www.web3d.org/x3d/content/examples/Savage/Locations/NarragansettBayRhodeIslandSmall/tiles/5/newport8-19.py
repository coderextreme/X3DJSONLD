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
        texture=ImageTexture(url=['../../images/5/newport8-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[23,25,26,27,29,31,32,31,31,32,33,35,36,36,37,37,37,37,37,38,38,38,40,24,25,27,28,28,30,31,31,32,35,37,39,40,40,41,41,40,41,39,38,37,37,39,24,26,28,29,30,31,30,30,34,37,39,40,42,42,42,43,43,42,41,41,39,38,39,24,25,27,30,32,33,32,31,34,39,41,42,43,44,44,44,44,44,43,43,42,41,40,25,26,28,31,33,34,32,31,35,39,42,44,46,47,46,46,46,45,45,43,43,43,43,27,28,29,31,33,34,34,34,37,40,42,45,46,47,47,47,47,47,46,44,43,44,45,26,27,30,33,34,35,35,37,40,41,44,46,47,47,48,47,48,47,47,45,44,45,46,26,29,33,35,35,36,37,39,39,41,43,45,47,47,48,49,49,49,49,49,47,46,46,26,30,33,34,36,38,38,39,42,44,45,45,47,48,49,50,51,51,50,49,48,46,46,29,31,33,34,36,37,40,39,44,47,47,48,48,50,50,52,52,51,50,49,48,48,49,33,36,36,36,39,39,41,41,45,47,47,48,48,49,49,50,50,50,50,50,50,53,53,36,39,38,38,38,40,42,42,45,48,48,48,48,49,50,50,51,52,51,51,52,53,52,36,39,38,38,39,40,42,43,46,49,50,50,50,50,52,53,54,54,53,53,53,52,49,37,39,41,42,41,43,44,45,48,50,53,52,52,51,52,53,54,53,53,53,53,52,48,37,38,40,43,43,46,46,47,49,51,53,55,56,55,53,53,54,53,53,53,53,51,48,38,39,41,44,44,47,48,49,50,53,51,55,57,56,54,54,53,55,54,54,53,51,51,41,44,46,47,46,48,49,50,52,54,53,54,55,55,55,54,55,56,54,53,52,51,53,43,46,48,49,48,49,50,48,51,53,53,56,56,55,57,55,56,56,55,55,53,51,53,43,44,47,49,48,48,49,48,52,53,54,57,57,58,57,56,56,58,55,55,56,53,53,42,44,47,47,49,52,51,51,53,53,55,57,57,58,57,57,57,59,56,55,56,53,52,43,44,47,48,49,52,52,51,53,56,58,59,59,60,57,58,58,56,56,54,52,50,50,43,44,46,48,49,52,52,52,53,55,57,59,59,60,58,58,58,57,56,56,55,53,53,42,43,45,48,51,53,53,53,54,55,56,58,59,60,60,58,57,56,57,57,55,54,55],
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
