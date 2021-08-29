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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,55.57839916841148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[393,361,475,474,282,207,197,146,158,188,194,198,190,185,266,132,142,124,90,68,78,88,311,349,353,399,412,191,197,141,186,430,439,201,144,142,151,104,97,97,92,92,38,31,338,291,349,346,377,251,179,121,134,386,312,301,273,259,132,97,76,79,78,33,30,24,504,276,516,386,386,423,419,390,112,231,230,202,195,168,91,71,59,61,42,20,18,18,427,407,476,420,433,421,357,320,345,180,137,134,119,95,35,27,24,31,28,20,16,14,285,397,394,402,333,334,366,324,262,215,75,140,83,40,27,20,17,20,26,18,12,14,344,355,377,371,291,312,254,226,179,163,113,87,42,29,27,24,17,20,19,16,14,10,235,270,244,283,272,228,158,146,114,101,71,37,30,27,23,16,16,16,15,18,14,13,141,155,193,141,180,122,134,92,68,62,42,33,33,28,20,21,15,15,18,14,14,13,77,83,103,106,100,75,78,52,49,42,35,28,27,24,22,20,17,17,14,15,14,15,55,55,59,60,61,56,49,45,46,38,34,28,23,25,21,18,17,15,16,17,13,17,48,43,49,49,52,47,43,39,36,36,28,29,24,21,22,17,15,16,21,15,15,15,42,42,42,45,41,42,40,37,33,31,30,25,22,21,20,16,19,19,16,16,14,15,41,36,40,44,42,38,36,34,32,31,26,24,23,18,16,16,20,18,19,14,16,15,43,38,35,38,35,34,35,29,30,26,25,22,20,19,27,22,22,19,18,20,16,16,46,41,38,33,32,32,33,28,28,26,23,21,26,21,21,25,25,28,21,15,18,18,47,39,38,36,34,32,34,30,25,24,20,26,24,25,25,24,28,25,23,25,22,23,41,40,37,36,32,31,31,27,30,30,26,26,30,31,31,30,30,30,27,25,25,21,41,38,38,36,34,31,33,32,32,33,29,32,31,34,33,31,33,34,31,28,28,22,40,36,37,35,36,34,36,34,36,40,33,36,34,39,36,37,34,36,33,33,28,26,38,34,35,38,37,38,42,38,42,41,40,40,39,43,42,38,42,41,39,37,31,28,41,41,40,40,43,44,44,43,44,50,45,43,47,48,50,45,51,41,42,37,36,33,41,40,40,41,42,45,44,44,44,48,45,44,49,50,52,45,50,41,44,38,37,35],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
