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
        texture=ImageTexture(url=['../../images/4/Malacca9-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.3890484551644233,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[9,11,13,4,8,13,15,14,32,31,43,43,44,68,47,59,36,143,311,499,385,549,10,4,9,9,9,9,9,16,55,16,57,16,48,70,44,90,65,50,276,205,401,487,4,12,12,8,15,6,14,7,15,25,19,44,49,33,45,83,110,52,232,111,220,459,9,11,10,15,11,9,12,8,9,57,14,58,121,45,54,72,89,90,81,91,262,361,10,17,16,18,11,10,12,6,9,23,41,116,61,70,45,59,62,56,51,56,128,129,21,24,25,11,9,10,10,8,10,69,49,29,66,52,41,60,67,77,48,60,66,233,25,25,24,11,12,18,24,22,16,52,56,42,42,48,53,41,111,51,80,73,71,76,20,23,22,16,19,12,22,27,15,66,23,22,50,28,66,68,66,44,49,88,77,105,18,26,24,15,20,18,20,29,15,73,54,53,23,56,68,188,76,37,109,65,103,174,22,24,25,20,17,23,31,31,20,48,59,25,59,72,43,82,109,38,67,68,124,204,16,27,17,28,26,15,24,33,25,25,40,29,77,81,68,74,199,68,58,77,242,225,21,26,24,24,24,10,45,32,25,33,42,38,73,82,45,87,106,89,66,59,132,375,19,20,18,22,25,22,61,21,27,47,72,69,77,58,92,57,208,164,95,84,182,576,21,22,23,21,26,53,45,35,72,145,71,99,55,53,96,43,112,89,71,105,286,269,21,23,22,23,25,20,29,36,233,234,63,138,61,83,78,62,66,94,251,187,460,190,21,20,23,21,26,30,36,104,81,124,99,87,71,72,96,87,60,139,181,588,305,208,24,25,21,17,25,28,43,25,69,188,165,110,74,96,95,88,90,215,259,454,418,342,22,22,21,17,30,29,20,33,39,125,182,88,93,94,61,70,102,422,497,606,533,499,20,18,22,22,36,61,77,65,43,90,147,87,102,77,61,113,313,403,644,899,690,758,8,19,24,54,67,94,50,72,50,161,157,71,54,45,120,452,331,775,510,740,1063,991,7,8,8,22,13,35,40,42,262,85,68,68,52,73,408,654,501,488,945,585,864,1018,15,20,8,31,48,33,56,196,228,48,58,65,48,98,278,437,1026,779,821,684,870,967,14,20,10,24,49,33,50,234,221,51,62,54,49,86,272,461,1063,806,788,707,901,996],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
