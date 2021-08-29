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
        texture=ImageTexture(url=['../../images/4/Malacca7-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[17,20,53,59,53,46,63,57,59,79,88,87,77,73,63,153,128,412,552,242,133,116,28,12,62,55,30,58,38,54,62,139,233,135,71,83,96,112,120,405,495,477,509,164,14,31,30,30,50,29,58,137,164,486,250,264,271,146,110,80,178,456,433,387,219,177,7,17,19,43,39,55,91,557,346,176,457,374,179,140,90,154,312,346,717,499,314,211,9,44,63,30,40,40,113,377,198,98,194,91,264,282,122,146,336,580,766,675,614,539,12,48,67,55,46,57,81,436,83,65,70,115,405,272,171,189,666,695,1038,903,771,264,31,35,52,59,75,57,64,93,53,62,86,166,150,216,305,387,699,950,975,841,698,426,28,54,27,39,68,75,51,41,71,80,68,95,103,172,227,491,775,952,1001,966,592,299,31,83,41,49,73,63,51,41,57,78,78,65,62,97,341,373,536,804,777,699,540,331,21,24,196,51,39,39,46,34,34,47,60,84,78,247,582,448,345,466,755,526,437,512,12,13,28,48,25,29,53,50,50,43,50,65,143,165,520,225,151,287,421,219,256,531,20,25,21,51,38,38,56,69,63,66,62,75,78,146,585,308,193,232,200,251,222,585,66,98,70,49,74,77,37,62,43,70,61,122,102,222,473,346,224,177,178,158,278,573,20,131,65,30,27,44,55,42,68,69,93,92,463,351,494,266,264,233,177,152,263,338,56,58,62,66,24,58,66,36,49,68,328,246,555,537,433,244,203,141,129,132,145,222,75,59,41,29,26,65,71,75,75,80,253,722,691,368,235,297,437,178,160,145,141,123,46,73,57,32,27,55,68,119,50,84,264,608,377,528,241,462,330,154,133,167,127,153,56,72,39,58,28,37,107,93,108,67,86,564,803,532,344,360,201,146,164,178,114,131,44,50,88,55,36,53,66,133,78,78,162,422,823,576,472,325,186,189,205,133,123,141,52,59,55,38,42,77,151,305,81,102,180,492,591,854,646,352,193,276,301,122,119,146,51,74,58,57,61,88,272,234,71,87,240,393,629,588,581,497,273,533,160,200,154,188,42,77,60,80,68,56,221,287,188,142,415,279,597,910,579,423,555,417,144,220,181,112,43,70,59,80,70,57,248,293,192,156,388,283,610,934,581,379,575,402,145,191,199,106],
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
