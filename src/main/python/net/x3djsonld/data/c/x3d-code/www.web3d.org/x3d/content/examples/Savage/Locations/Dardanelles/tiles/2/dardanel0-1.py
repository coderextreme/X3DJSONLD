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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/2/dardanel0-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_2_01',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(39.79722229877732,26.983082655714444,94618.35388661711),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(39.79722229877732,26.983082655714444,0.0),child1Url=['../../tiles/3/dardanel0-2.x3d'],child2Url=['../../tiles/3/dardanel0-3.x3d'],range=113542.02,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/2/dardanel0-1.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.49987728550963,0.0),geoSystem=["GD"],height=[1,0,1,1,0,-2,1,26,125,115,234,270,371,656,963,967,499,375,528,481,469,499,0,0,0,-2,1,2,0,3,76,88,85,297,516,766,501,690,804,329,418,340,330,355,1,0,1,0,0,3,0,1,1,10,23,33,291,417,400,601,717,573,327,428,362,348,151,21,-4,1,1,0,0,4,4,0,6,15,41,245,280,430,492,623,500,318,355,348,454,489,189,89,54,74,192,24,-3,-1,3,18,33,62,165,149,249,591,332,241,238,240,316,336,550,559,539,699,825,493,98,56,66,152,147,291,224,509,492,508,467,424,231,217,219,341,503,688,681,1033,977,1186,830,506,394,183,187,349,396,691,705,634,598,465,329,301,248,374,665,753,885,1004,1294,1084,1508,711,547,549,785,690,650,632,613,576,569,557,423,441,180,359,629,520,338,785,854,1191,1198,1258,1133,1070,661,887,474,718,477,500,575,473,365,375,112,176,291,324,222,241,262,752,1215,1287,1172,546,375,371,434,431,259,499,613,619,410,389,67,93,134,320,145,267,225,382,584,694,978,711,477,318,268,265,325,316,302,567,570,580,95,147,89,150,251,494,453,283,314,381,599,797,478,327,242,246,210,208,255,358,371,420,213,221,214,121,190,247,438,472,655,706,348,515,793,873,735,357,397,315,160,179,284,273,328,300,338,179,190,206,298,492,328,394,319,468,703,647,441,580,695,364,235,256,529,541,454,460,505,359,269,268,375,247,187,171,258,238,502,451,415,329,245,217,358,184,532,558,386,411,554,609,434,371,244,163,108,100,153,100,161,242,478,342,369,625,324,424,146,177,344,262,273,496,369,507,471,320,179,151,140,84,293,282,523,604,271,428,477,703,596,540,276,222,107,148,377,465,389,363,343,222,214,216,144,62,329,482,290,307,426,506,894,811,137,240,334,526,299,366,599,462,612,422,325,329,320,194,98,379,399,340,794,542,509,485,53,184,383,514,561,513,496,283,192,229,162,228,232,329,229,112,411,485,341,755,536,476,90,165,388,356,576,441,321,206,191,153,93,257,98,217,211,123,171,414,219,425,186,200,86,160,394,361,562,442,322,206,194,152,93,256,94,213,210,126,169,414,207,422,180,197],normalPerVertex=False,xDimension=22,xSpacing=0.046019558,zDimension=22,zSpacing=0.03516307,
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel0-1.py")
