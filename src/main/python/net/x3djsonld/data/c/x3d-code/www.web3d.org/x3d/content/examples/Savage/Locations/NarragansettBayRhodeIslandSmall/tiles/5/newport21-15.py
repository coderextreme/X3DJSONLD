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
        texture=ImageTexture(url=['../../images/5/newport21-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[42,42,40,39,40,43,44,44,45,46,44,43,40,39,38,35,33,30,28,26,26,25,22,40,41,43,44,43,45,46,45,48,48,46,44,43,42,41,38,35,33,30,27,26,25,23,41,43,45,46,45,47,48,48,49,49,49,45,45,44,43,39,37,36,32,28,25,24,23,42,43,45,46,46,48,48,50,48,49,49,48,47,44,42,41,39,39,36,31,28,25,25,44,44,45,45,46,48,50,49,48,49,51,52,52,48,44,42,41,42,37,32,30,28,25,45,46,47,47,47,49,52,53,50,51,52,55,56,52,46,44,44,42,36,31,30,29,24,47,47,46,48,49,51,54,55,54,53,53,54,54,52,48,46,45,42,37,32,30,29,27,48,47,47,48,48,50,53,53,55,55,55,55,55,54,50,49,47,44,40,36,32,30,27,47,48,48,48,48,50,52,52,54,55,55,55,58,57,55,52,49,44,41,40,37,32,28,48,48,49,49,50,50,51,54,55,53,53,54,56,56,55,54,50,47,42,38,38,36,34,48,48,48,47,48,48,52,55,55,54,56,57,57,56,53,53,51,48,45,42,40,40,37,47,46,47,48,48,50,53,56,56,56,58,59,58,56,54,53,50,48,47,46,43,40,35,47,48,50,51,51,52,53,53,56,57,57,56,57,56,55,54,54,51,48,46,44,39,33,47,48,50,51,51,51,53,54,57,57,56,57,58,58,57,55,55,53,49,46,43,37,33,47,47,49,50,51,51,52,54,56,55,56,58,59,60,59,56,54,53,49,47,45,40,36,47,47,50,51,51,51,51,54,55,55,56,56,57,60,60,58,55,53,51,48,46,42,36,47,47,47,49,50,52,52,53,54,56,57,57,57,59,59,57,55,54,52,51,48,43,38,46,47,48,50,50,50,51,53,55,57,57,58,59,60,60,59,57,54,53,52,49,44,40,46,48,49,51,51,51,52,54,56,57,57,57,58,59,60,61,60,56,53,50,47,42,38,47,48,48,47,48,49,51,54,56,56,56,57,57,59,60,60,60,56,52,50,47,42,38,45,46,47,47,48,49,52,55,55,55,57,58,59,59,60,59,57,55,53,51,47,42,40,42,43,44,47,49,51,54,56,56,56,58,59,58,58,59,60,59,56,55,52,47,42,40,42,43,44,47,49,51,53,56,55,55,57,59,58,58,58,59,60,58,56,52,47,43,40],
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
