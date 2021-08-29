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
        texture=ImageTexture(url=['../../images/5/newport14-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[51,52,53,56,56,57,57,57,58,58,57,60,61,61,60,60,59,57,55,56,50,48,48,51,52,53,55,56,56,55,55,58,59,61,63,63,61,61,62,61,58,57,56,48,48,48,53,53,53,53,54,54,55,57,59,61,64,65,65,63,63,62,61,58,57,53,48,48,48,53,54,54,56,55,56,59,63,63,64,64,63,63,63,63,62,61,59,58,54,53,54,54,53,55,59,61,59,60,60,62,62,63,63,62,62,61,60,60,60,59,55,48,48,48,50,53,55,59,61,59,59,60,62,62,63,62,64,63,62,59,58,58,58,54,48,48,48,48,52,55,57,57,58,60,61,62,63,63,62,63,63,61,59,57,56,55,54,48,48,48,48,51,52,54,56,59,61,63,62,64,64,63,63,61,58,55,54,55,53,48,48,48,48,48,52,52,54,55,58,60,62,62,63,63,63,63,60,56,53,53,55,54,48,48,48,48,48,52,53,54,55,56,58,60,62,62,61,61,61,60,57,55,54,55,54,48,48,48,48,48,52,53,54,54,56,57,59,60,60,61,61,60,58,57,55,55,54,51,48,48,48,48,48,54,53,53,54,56,57,59,60,59,59,60,59,57,54,51,53,52,48,48,48,48,48,48,54,53,53,55,56,59,59,60,59,59,60,60,57,53,50,51,49,48,48,48,48,48,48,55,54,55,56,57,57,57,58,59,61,60,59,59,56,54,52,48,48,48,48,48,48,48,55,55,55,56,57,58,57,57,57,59,59,55,52,52,52,50,48,48,48,48,48,48,48,55,58,57,55,56,59,60,60,58,58,57,52,48,48,49,48,48,48,48,48,48,48,48,54,56,57,56,57,61,63,61,58,57,56,54,52,52,51,48,48,48,48,48,48,48,48,55,55,55,56,58,60,61,60,59,58,54,54,57,58,52,48,48,48,48,48,48,48,48,58,58,58,57,57,58,58,58,58,57,54,55,58,60,53,48,48,48,48,48,48,48,48,56,57,57,56,58,60,59,58,57,54,53,55,57,58,52,48,48,48,48,48,48,48,48,55,57,57,57,59,60,61,61,60,55,53,52,54,56,51,48,48,48,48,48,48,48,48,55,57,58,60,61,61,59,61,60,57,54,52,54,57,51,48,48,48,48,48,48,48,48,58,58,58,61,62,61,59,61,59,56,57,55,55,55,50,48,48,48,48,48,48,48,48],
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
