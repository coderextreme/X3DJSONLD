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
        texture=ImageTexture(url=['../../images/4/Malacca10-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,3,4,4,28,113,42,23,43,51,49,17,29,57,40,51,21,49,12,19,35,244,2,4,4,5,31,51,41,41,51,49,63,56,50,44,508,256,45,38,26,12,105,26,0,6,6,27,38,86,48,28,50,61,93,386,46,67,71,483,50,20,26,17,12,16,30,20,27,28,23,70,139,63,120,59,79,360,77,77,63,88,36,55,12,21,31,37,42,40,41,41,48,25,262,64,140,192,77,75,56,73,53,93,75,30,37,21,41,47,45,26,55,58,65,44,845,158,167,219,78,51,44,69,73,39,45,14,18,23,46,48,38,38,68,53,65,570,204,232,158,218,96,72,58,45,31,40,46,18,45,36,60,71,80,61,61,213,166,133,468,292,151,89,95,76,77,58,50,38,25,20,20,60,50,64,93,71,92,448,732,493,133,121,134,92,89,73,48,90,69,61,29,26,35,34,103,79,327,95,80,307,409,131,212,95,122,88,64,84,71,83,71,66,51,41,78,62,84,63,72,358,99,669,899,276,272,336,113,76,66,80,70,68,66,60,58,54,81,41,60,61,52,64,457,789,589,229,147,252,97,86,79,60,74,71,73,70,55,103,46,37,46,73,82,100,524,147,206,560,372,592,101,82,93,57,77,80,77,62,52,58,35,54,55,41,108,731,274,171,156,204,279,120,129,182,85,64,52,62,72,66,56,58,68,25,33,45,90,866,286,182,140,185,164,85,102,452,107,52,51,62,52,58,77,67,64,57,69,66,284,613,533,374,228,332,199,101,142,305,93,51,42,73,45,41,75,63,57,58,56,47,335,299,367,398,248,459,105,80,231,152,69,61,39,59,70,70,71,100,59,46,71,63,95,664,244,609,861,199,95,69,119,68,60,59,43,31,67,87,67,174,155,131,61,73,243,909,711,749,490,176,255,77,63,53,86,37,57,69,60,89,76,159,280,78,37,46,1247,709,753,679,302,106,323,70,50,47,48,45,47,38,61,88,154,172,70,51,63,65,501,861,887,444,149,98,106,68,66,73,54,37,39,40,54,66,380,394,71,121,65,43,526,826,906,396,168,96,102,67,70,75,54,42,35,51,41,61,385,410,59,134,77,48],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
