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
        texture=ImageTexture(url=['../../images/5/newport25-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63985995553778,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[51,49,47,45,43,41,40,40,40,40,40,40,40,40,40,40,40,40,40,42,42,42,41,51,50,48,46,43,41,40,40,40,40,40,40,40,40,40,41,43,43,43,46,45,45,44,52,50,49,47,44,41,40,40,40,40,40,40,40,40,40,40,42,44,46,48,48,48,47,52,51,49,47,44,42,40,40,40,40,40,40,40,40,40,40,41,44,48,50,50,50,50,53,51,50,48,44,42,41,40,40,40,40,40,40,40,40,40,41,46,49,51,51,50,50,53,51,50,48,44,43,42,41,41,41,42,41,40,40,40,40,43,47,50,51,50,49,49,53,51,50,48,45,43,42,41,41,42,43,42,41,41,42,42,45,49,51,51,50,48,48,53,51,50,47,45,43,42,42,41,42,42,42,43,44,46,46,49,51,52,51,49,47,46,53,51,49,47,45,44,43,42,42,42,42,43,44,46,48,50,51,53,52,50,48,46,46,52,50,48,47,45,44,44,43,43,43,43,43,44,46,49,52,53,54,53,51,49,47,46,52,50,48,47,46,45,44,43,43,43,43,43,44,46,50,53,56,56,54,51,49,47,46,52,50,48,47,46,45,44,44,43,43,43,44,43,45,50,56,58,58,55,51,49,46,46,52,50,48,47,46,45,44,44,43,43,43,43,43,43,47,55,60,59,55,51,48,46,46,52,50,48,48,47,46,45,44,44,43,43,43,43,43,45,51,58,58,54,50,46,47,47,52,50,50,50,48,47,47,46,44,43,43,43,43,43,44,47,51,51,49,46,44,46,48,53,52,52,51,49,48,48,47,45,43,43,43,43,43,43,44,45,45,44,44,44,46,47,54,54,53,52,50,50,49,48,45,44,44,44,44,43,43,43,43,43,43,43,44,45,47,54,54,53,52,53,53,51,49,46,44,45,47,46,45,43,43,43,43,43,44,45,46,47,53,52,52,53,56,55,52,50,47,46,46,47,47,46,44,43,43,43,44,46,47,49,50,52,52,52,54,57,56,53,50,48,47,47,48,47,46,45,43,43,44,45,47,49,52,54,53,53,53,55,56,54,53,50,48,48,48,48,48,47,46,44,43,44,45,48,50,55,58,52,52,53,55,57,55,52,50,48,48,49,49,49,49,46,44,44,45,46,48,52,58,61,52,52,53,55,57,56,53,49,48,48,49,50,50,49,46,45,44,45,46,48,54,60,63],
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
