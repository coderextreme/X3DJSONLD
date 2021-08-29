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
        texture=ImageTexture(url=['../../images/5/newport15-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[27,28,29,31,33,35,36,38,40,40,41,42,45,47,46,46,49,53,56,56,56,58,58,27,28,29,31,34,37,36,38,39,39,41,42,44,44,45,47,49,53,56,57,60,64,63,25,27,29,30,33,36,36,37,39,40,42,44,46,46,46,46,48,52,55,60,63,65,65,24,26,29,31,33,36,37,39,40,43,45,46,46,46,45,45,47,52,56,61,64,64,63,22,24,29,31,34,37,39,41,43,46,49,50,49,49,49,49,50,52,56,58,60,60,59,21,28,32,35,38,43,44,45,45,46,49,51,51,50,53,54,52,53,56,58,58,57,55,24,25,28,33,37,40,42,43,45,47,47,48,49,50,53,55,54,54,57,59,60,58,56,23,24,27,30,33,33,38,41,42,45,47,48,50,52,54,56,55,55,56,57,58,57,57,23,23,25,29,32,31,36,40,41,44,48,48,51,53,54,54,55,54,56,56,56,55,56,21,24,27,31,33,34,39,41,42,45,47,49,49,52,53,52,53,54,57,58,56,54,54,20,23,26,29,32,35,39,40,41,45,47,48,49,50,52,52,54,54,56,56,55,54,55,20,21,23,27,29,33,38,40,41,43,47,49,50,49,51,53,57,55,55,53,54,56,56,20,21,21,24,27,30,36,40,43,43,46,48,50,51,51,51,53,53,53,52,54,55,54,19,21,22,24,27,30,36,39,41,43,45,46,48,50,50,51,52,51,51,52,53,54,53,19,22,24,27,31,33,38,39,39,43,46,47,49,51,50,49,49,48,49,50,51,52,51,20,23,27,29,32,36,39,40,42,42,47,47,48,50,50,49,48,47,49,49,49,49,49,20,23,27,30,32,34,36,37,39,41,44,46,47,49,51,51,51,49,50,50,50,50,50,20,23,26,29,31,34,35,37,39,40,42,44,45,45,48,51,52,48,50,51,51,52,52,20,24,27,30,32,34,36,38,41,43,43,44,45,46,46,47,48,47,50,51,50,51,52,22,23,26,29,32,35,37,40,41,42,42,44,46,44,45,45,46,46,49,52,53,52,51,20,22,24,28,31,34,38,39,40,42,43,44,45,44,45,45,46,46,48,51,53,53,52,20,21,24,27,30,33,36,38,41,42,42,43,43,43,43,43,45,46,48,51,55,56,55,20,22,23,26,29,33,35,38,40,41,41,43,42,42,42,43,45,47,50,52,56,58,56],
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
