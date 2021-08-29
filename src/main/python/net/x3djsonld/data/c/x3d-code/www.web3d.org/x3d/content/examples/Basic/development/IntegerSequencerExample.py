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
    meta(content='IntegerSequencerExample.x3d',name='title'),
    meta(content='This example shows how to use the IntegerSequencer prototype in an animated scenario.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='13 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d',name='reference'),
    meta(content='integer sequencer',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IntegerSequencerExample.x3d'),
    Background(groundColor=[(0.2,0.2,0.2)],skyColor=[(0.2,0.2,0.2)]),
    TimeSensor(DEF='Clock',cycleInterval=12,enabled=False,loop=True),
    IntegerSequencer(DEF='IntegerSequencerInstance',key=[0,0.08333,0.1667,0.25,0.3333,0.4167,0.5,0.5833,0.6666,0.75,0.8333,0.9167,1.0],keyValue=[10,9,8,7,6,5,4,3,2,1,0,-1,10]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='IntegerSequencerInstance'),
    Transform(translation=(0,2,0),
      children=[
      Shape(
        geometry=Text(string=["IntegerSequencer => Switch","touch blue text to count down"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.6,0.8)))),
      TouchSensor(DEF='TouchToStart',description='Touch To Start'),
      ROUTE(fromField='touchTime',fromNode='TouchToStart',toField='set_startTime',toNode='Clock'),
      ROUTE(fromField='isOver',fromNode='TouchToStart',toField='enabled',toNode='Clock'),
      #  background box to simplify touching 
      Transform(translation=(0,0,-0.5),
        children=[
        Shape(
          geometry=Box(size=(11,2,0.1)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,0.2),transparency=0.95)))])]),
    Transform(translation=(-3,-2.5,0),
      children=[
      Shape(
        geometry=Text(string=["click for","previous key","(count up)"],
          fontStyle=FontStyle(DEF='PreviousNextFont',justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.6,0.4)))),
      TouchSensor(DEF='TouchPrevious',description='touch for previous'),
      ROUTE(fromField='isActive',fromNode='TouchPrevious',toField='previous',toNode='IntegerSequencerInstance')]),
    Transform(translation=(3,-2.5,0),
      children=[
      Shape(
        geometry=Text(string=["click for","next key","(count down)"],
          fontStyle=FontStyle(USE='PreviousNextFont')),
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.6,0.4)))),
      TouchSensor(DEF='TouchNext',description='touch for next'),
      ROUTE(fromField='isActive',fromNode='TouchNext',toField='next',toNode='IntegerSequencerInstance')]),
    #  Interesting materials from Universal Media library 
    ExternProtoDeclare(name='ArtDeco02',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco02","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco02"]),
    ExternProtoDeclare(name='ArtDeco04',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco04","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco04"]),
    ExternProtoDeclare(name='ArtDeco05',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco05","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco05"]),
    ExternProtoDeclare(name='ArtDeco08',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco08","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco08"]),
    ExternProtoDeclare(name='ArtDeco09',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco09","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco09"]),
    ExternProtoDeclare(name='ArtDeco13',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco13","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco13"]),
    ExternProtoDeclare(name='ArtDeco18',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco18","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco18"]),
    ExternProtoDeclare(name='ArtDeco21',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco21","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco21"]),
    ExternProtoDeclare(name='ArtDeco24',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco24","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco24"]),
    ExternProtoDeclare(name='ArtDeco25',url=["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco25","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco25"]),
    Transform(translation=(0,-0.5,0),
      children=[
      Switch(DEF='CountDownSwitch',whichChoice=0,
        children=[
        Group(
          children=[
          Shape(
            geometry=Text(length=[0],string=["child choice 0"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
            appearance=Appearance(
              material=ProtoInstance(name='ArtDeco02')))]),
        Shape(
          geometry=Text(length=[0],string=["child choice 1"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco09'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 2"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco08'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 3"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco18'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 4"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco21'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 5"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco24'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 6"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco25'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 7"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco13'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 8"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco05'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 9"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco04'))),
        Shape(
          geometry=Text(length=[0],string=["child choice 10"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=ProtoInstance(name='ArtDeco02')))])]),
    ROUTE(fromField='value_changed',fromNode='IntegerSequencerInstance',toField='whichChoice',toNode='CountDownSwitch')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IntegerSequencerExample.py")
