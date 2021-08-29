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
        texture=ImageTexture(url=['../../images/5/newport22-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[42,43,44,47,49,51,53,56,55,55,57,59,58,58,58,59,60,58,56,52,47,43,40,44,46,47,49,49,49,50,52,54,55,57,58,57,56,56,57,57,56,55,52,48,44,39,45,47,47,47,48,49,50,50,53,55,56,56,57,55,54,55,55,55,53,51,47,45,41,44,46,46,47,46,48,49,52,54,55,57,55,56,55,54,55,55,53,51,48,46,45,41,43,45,44,46,46,48,49,52,55,55,56,55,55,54,54,55,54,51,48,46,46,43,40,41,43,43,44,45,46,49,52,55,54,54,55,54,54,54,53,52,49,46,43,43,39,37,42,44,44,44,44,47,51,53,53,54,56,58,55,53,51,49,47,44,42,41,41,39,35,44,45,45,44,45,48,50,50,51,52,55,57,54,53,49,45,43,41,39,38,39,38,35,41,42,42,40,43,46,48,49,52,53,55,57,55,53,48,45,42,41,38,38,39,36,34,37,39,42,42,45,48,49,49,51,52,54,55,53,51,47,45,43,41,38,38,37,34,32,37,40,41,42,44,46,48,50,50,49,49,49,48,49,46,44,41,39,37,37,37,36,35,38,39,38,39,41,43,45,46,48,48,47,47,51,52,47,42,40,38,38,37,38,38,39,37,37,38,40,41,44,46,46,46,46,47,48,49,49,45,41,40,38,37,36,34,34,35,36,36,38,39,43,46,46,45,45,45,46,46,47,47,44,41,40,36,36,37,36,36,34,36,35,36,36,40,43,43,43,45,46,46,46,46,46,44,39,37,36,36,37,38,38,36,38,35,37,39,41,41,41,42,42,42,43,43,45,44,42,39,36,36,36,37,37,36,36,36,35,38,41,40,39,39,41,42,42,42,43,43,42,40,37,36,36,35,36,35,35,37,33,34,35,36,37,38,39,41,44,44,43,42,41,40,38,36,36,36,34,32,32,34,38,34,34,34,33,34,37,38,41,43,44,43,43,41,39,38,38,40,40,36,31,33,34,38,37,37,34,32,34,37,40,42,43,43,42,41,40,38,35,36,39,39,35,31,32,33,36,39,40,37,34,34,36,40,42,41,40,39,38,39,37,32,31,35,36,34,33,34,33,35,36,38,38,36,34,35,37,39,39,39,38,38,36,33,30,31,35,34,33,32,33,33,34,36,37,36,36,35,36,36,38,39,39,38,38,35,32,29,31,35,33,32,32,34,36,36],
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
