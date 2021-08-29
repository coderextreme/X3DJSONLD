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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='EventMonitorTest.x3d',name='title'),
    meta(content='This scene demonstrates how to receive a simple event and report it graphically, repeating every few seconds. Scene conversion from the XML encoding (.x3d) is then used to demonstrate X3DOM event handling within a web page (.xhtml).',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Chris Peri, Dave Arendash and Damon Hernandez',name='acknowledgements'),
    meta(content='15 March 2014',name='created'),
    meta(content='27 October 2020',name='modified'),
    meta(content='record log outputs, compare various X3D players',name='TODO'),
    meta(content='AEC Hackathon v1.1, Facebook Menlo Park California',name='reference'),
    meta(content='http://www.aechackathon.org',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/UserInterface/EventMonitorTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/stylesheets/X3dToX3dom.xslt',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ================================================== 
    #  Reusable code block for X3DOM: indicate event status 
    children=[
    WorldInfo(title='EventMonitorTest.x3d'),
    Background(skyColor=[(0.4,0.6,1)]),
    Viewpoint(description='Event Monitor Text',position=(0,0,6)),
    Transform(translation=(-0.6,1.2,0),
      children=[
      Shape(
        geometry=Text(string=["Event Status"],
          fontStyle=FontStyle(DEF='Font',justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(DEF='TextMaterial',diffuseColor=(0.7,0.7,0.1))))]),
    Switch(DEF='EventSwitch',whichChoice=0,
      children=[
      Group(DEF='DisplayUp',
        children=[
        Shape(
          geometry=Text(string=["UP"],
            fontStyle=FontStyle(USE='Font')),
          appearance=Appearance(
            material=Material(DEF='UpColor',diffuseColor=(0.2,0.7,0.3)))),
        Transform(translation=(-2.5,0,0),
          children=[
          Shape(
            geometry=Cone(DEF='SmallCone',bottomRadius=0.4,height=0.6),
            appearance=Appearance(
              material=Material(USE='UpColor')))])]),
      Group(DEF='DisplayDown',
        children=[
        Shape(
          geometry=Text(string=["DOWN"],
            fontStyle=FontStyle(USE='Font')),
          appearance=Appearance(
            material=Material(DEF='DownColor',diffuseColor=(1,0.2,0.2)))),
        Transform(rotation=(1,0,0,3.14159),translation=(-2.5,0,0),
          children=[
          Shape(
            geometry=Cone(USE='SmallCone'),
            appearance=Appearance(
              material=Material(USE='DownColor')))])])]),
    #  ================================================== 
    #  Test harness: produce true/false events, flip the Switch 
    IntegerTrigger(DEF='EventTrueTrigger',integerKey=0),
    ROUTE(fromField='triggerValue',fromNode='EventTrueTrigger',toField='whichChoice',toNode='EventSwitch'),
    IntegerTrigger(DEF='EventFalseTrigger',integerKey=1),
    ROUTE(fromField='triggerValue',fromNode='EventFalseTrigger',toField='whichChoice',toNode='EventSwitch'),
    Script(DEF='EventReceiverScript',
      field=[
      field(accessType='inputOnly',name='input',type='SFBool'),
      field(accessType='outputOnly',name='eventIsTrue',type='SFBool'),
      field(accessType='outputOnly',name='eventIsFalse',type='SFBool')]),
    ROUTE(fromField='eventIsTrue',fromNode='EventReceiverScript',toField='set_boolean',toNode='EventTrueTrigger'),
    ROUTE(fromField='eventIsFalse',fromNode='EventReceiverScript',toField='set_boolean',toNode='EventFalseTrigger'),
    #  Testing block: alternate true/false 
    BooleanSequencer(DEF='BooleanSwitcher',key=[0,0.5,1],keyValue=[True,False,False]),
    ROUTE(fromField='value_changed',fromNode='BooleanSwitcher',toField='input',toNode='EventReceiverScript'),
    TimeSensor(DEF='SwitchTestClock',cycleInterval=6,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='SwitchTestClock',toField='set_fraction',toNode='BooleanSwitcher')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EventMonitorTest.py")
