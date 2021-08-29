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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Manta4.x3d',name='title'),
    meta(content='Original model of Manta UUV by Naval Undersea Warfare Center (NUWC) Newport Rhode Island.',name='description'),
    meta(content='Mark Boyd',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='21 May 1997',name='created'),
    meta(content='7 June 2004',name='translated'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Manta UUV',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Manta4.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Manta side view',position=(0,0,20)),
    #  correct strange coordinate system for this model to align with Y up, X north, Z east 
    Transform(rotation=(1.0,0.0,0.0,-1.57),
      children=[
      Transform(rotation=(0.0,0.0,-1.0,1.57),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.1,diffuseColor=(0.5,0.5,0.5),shininess=0.3,specularColor=(0.83,0.83,0.83))),
          geometry=Extrusion(convex=False,creaseAngle=1.785,crossSection=[(-3.0,-0.31034),(-2.4,-0.10345),(-1.8,-0.31034),(-1.2,-0.82759),(-0.6,-1.24138),(0.0,-1.34483),(0.6,-1.24138),(1.2,-0.82759),(1.8,-0.31034),(2.4,-0.10345),(3.0,-0.31034),(2.4,0.47586),(1.8,0.95172),(1.2,1.34483),(0.6,1.55172),(0.0,1.65517),(-0.6,1.55172),(-1.2,1.34483),(-1.8,0.95172),(-2.4,0.47586),(-3.0,-0.31034)],scale=[(0.07,0.04),(0.2,0.1),(0.27,0.2),(0.53,0.4),(0.75,0.6),(0.88,0.8),(0.98,0.95),(1.0,1.0),(1.0,1.0),(0.97,0.95),(0.95,0.85),(0.93,0.75),(0.88,0.65),(0.81,0.55),(0.73,0.45),(0.65,0.35),(0.55,0.25),(0.45,0.17),(0.35,0.1),(0.25,0.03),(0.2,0.02),(0.15,0.01),(0.04,0.0010)],solid=False,spine=[(0.0,-7.14,0.0),(0.0,-6.96,0.0),(0.0,-6.79,0.0),(0.0,-5.71,0.0),(0.0,-4.29,0.0),(0.0,-2.86,0.0),(0.0,-1.43,0.0),(0.0,0.0,0.0),(0.0,0.36,0.0),(0.0,2.86,0.0),(0.0,4.29,0.0),(0.0,5.71,0.0),(0.0,7.14,0.0),(0.0,8.57,0.0),(0.0,10.0,0.0),(0.0,11.43,0.0),(0.0,12.86,0.0),(0.0,14.29,0.0),(0.0,15.71,0.0),(0.0,17.14,0.0),(0.0,17.5,0.0),(0.0,17.68,0.0),(0.0,17.86,0.0)])),
        Transform(rotation=(0.0,0.0,1.0,1.57),translation=(0.0,15.0,0.0),
          children=[
          Transform(rotation=(1.0,0.0,0.0,1.57),
            children=[
            Transform(DEF='SONAR',rotation=(0.0,0.0,1.0,1.57),
              children=[
              Transform(DEF='CONETRA',center=(0.0,15.0,0.0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='CONEMAT',diffuseColor=(0.0,1.0,0.0),transparency=0.5)),
                  geometry=Sphere(DEF='SPHEREGEO',radius=0.1))])]),
            Sound(maxBack=500.0,maxFront=500.0,minBack=50.0,minFront=50.0,
              source=AudioClip(DEF='SOUND_SOURCE',description='Sonar688',url=["Sonar688.wav","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Sonar688.wav"])),
            PositionInterpolator(DEF='S',key=[0.0,0.137,0.411,0.411,1.0],keyValue=[(1.0,1.0,1.0),(300.0,1.0,1500.0),(900.0,1.0,4500.0),(0.0010,0.0010,0.0010),(0.0010,0.0010,0.0010)]),
            PositionInterpolator(DEF='P',key=[0.0,0.137,0.411,0.411,1.0],keyValue=[(0.0,0.0,0.0),(0.0,-1015.0,0.0),(0.0,-3045.0,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0)]),
            ColorInterpolator(DEF='C',key=[0.0,0.137,0.205,0.274,0.411,1.0],keyValue=[(0.0,1.0,0.0),(0.0,1.0,0.0),(1.0,0.2,0.2),(1.0,0.0,0.0),(1.0,0.0,0.0),(1.0,0.0,0.0)]),
            TimeSensor(DEF='SonarTimer',cycleInterval=5.0,loop=True),
            ROUTE(fromField='cycleTime',fromNode='SonarTimer',toField='set_startTime',toNode='SOUND_SOURCE'),
            ROUTE(fromField='fraction_changed',fromNode='SonarTimer',toField='set_fraction',toNode='S'),
            ROUTE(fromField='fraction_changed',fromNode='SonarTimer',toField='set_fraction',toNode='P'),
            ROUTE(fromField='fraction_changed',fromNode='SonarTimer',toField='set_fraction',toNode='C'),
            ROUTE(fromField='value_changed',fromNode='S',toField='scale',toNode='CONETRA'),
            ROUTE(fromField='value_changed',fromNode='P',toField='translation',toNode='CONETRA'),
            ROUTE(fromField='value_changed',fromNode='C',toField='set_diffuseColor',toNode='CONEMAT')])]),
        Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,-1.5,1.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.0,0.5,0.0))),
            geometry=Extrusion(creaseAngle=1.78,crossSection=[(-0.25,0.9),(0.25,0.9),(0.25,-3.5),(-0.25,-3.5),(-0.25,0.9)],scale=[(1.0,1.6),(1.0,1.2),(1.0,0.8),(1.0,0.4)],spine=[(0.0,-0.25,0.0),(0.0,0.35,0.0),(0.0,0.7,0.0),(0.0,1.0,0.0)]))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Manta4.py")
